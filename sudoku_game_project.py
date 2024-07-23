import turtle
import numpy as np
import pandas as pd
import random
import time

selected_cell = (-1, -1)
original_board = None
board = None
start_time = None  
countdown_time = 30  
formatted_time = "0:00" 

def initialize_timer():
    global start_time
    start_time = time.time()  

def draw_sudoku_grid():
    turtle.speed(0)
    turtle.hideturtle()
    turtle.pensize(10)
    turtle.bgcolor("lemonchiffon")
    turtle.color("darkblue")
    turtle.penup()
    turtle.goto(-150, 150)
    turtle.pendown()

    cell_size = 300 / 9  
    for i in range(10):
        if i % 3 == 0:
            turtle.pensize(5)  
        else:
            turtle.pensize(3)  
            
        turtle.penup()
        turtle.goto(-150, 150 - i * cell_size)
        turtle.pendown()
        turtle.forward(300)
        turtle.penup()
        turtle.goto(-150 + i * cell_size, 150)
        turtle.right(90)
        turtle.pendown()
        turtle.forward(300)
        turtle.left(90)

def draw_numbers(board):
    turtle.hideturtle()
    turtle.pensize(2)
    turtle.color("black") 
    turtle.penup()
    
    cell_size = 300 / 9
    for row in range(9):
        for col in range(9):
            if board.iloc[row, col] != 0:
                turtle.penup()
                turtle.goto(-150 + col * cell_size + cell_size / 2, 150 - row * cell_size - cell_size + (cell_size / 2) - 10)
                turtle.pendown()
                turtle.write(board.iloc[row, col], align="center", font=("Comic Sans MS", 12, "normal"))

def draw_title():
    turtle.penup()
    turtle.goto(0, 200)
    turtle.pendown()
    turtle.color("darkblue")
    turtle.write("Sudoku Puzzle", align="center", font=("Comic Sans MS", 24, "bold"))

def draw_timer():
    global formatted_time
    turtle.penup()
    turtle.goto(-50, 170)
    turtle.color("lemonchiffon")
    turtle.write(f"Time: {formatted_time}", align="left", font=("Comic Sans MS", 16, "normal"))
    turtle.color("black")
    elapsed_time = time.time() - start_time
    remaining_time = max(countdown_time - int(elapsed_time), 0)  
    minutes, seconds = divmod(remaining_time, 60)
    formatted_time = f"{minutes}:{seconds:02d}"
    turtle.penup()
    turtle.goto(-50, 170)
    turtle.pendown()
    turtle.write(f"Time: {formatted_time}", align="left", font=("Comic Sans MS", 16, "normal"))

    if remaining_time <= 0:
        turtle.penup()
        turtle.goto(0, -200)
        turtle.pendown()
        turtle.color("darkred")
        turtle.write("Game Over! Time's up!", align="center", font=("Comic Sans MS", 24, "bold"))
        turtle.done()
    else:
        turtle.ontimer(draw_timer, 1000)  

def solve_sudoku(board):
    for row in range(9):
        for col in range(9):
            if board.iloc[row, col] == 0:
                for num in range(1, 10):
                    if check_valid(board, row, col, num):
                        board.iloc[row, col] = num

                        if solve_sudoku(board):
                            return True

                        board.iloc[row, col] = 0

                return False

    return True

def generate_sudoku_puzzle(difficulty):
    board = create_empty_board()
    solve_sudoku(board)
    puzzle = board.copy()
    if difficulty == 'easy':
        num_to_remove = random.randint(40, 50)
    elif difficulty == 'medium':
        num_to_remove = random.randint(50, 60)
    elif difficulty == 'hard':
        num_to_remove = random.randint(60, 70)
    else:
        raise ValueError("Invalid difficulty level.")
    
    cells = np.random.choice(81, num_to_remove, replace=False)

    for cell in cells:
        row = cell // 9
        col = cell % 9
        puzzle.iloc[row, col] = 0  

    return puzzle

def check_valid(board, row, col, num):
 
    if num in board.iloc[row, :].values:
        return False
    
    if num in board.iloc[:, col].values:
        return False
    
    start_row = 3 * (row // 3)
    start_col = 3 * (col // 3)
    if num in board.iloc[start_row:start_row+3, start_col:start_col+3].values.flatten():
        return False
    
    return True

def create_empty_board():
    return pd.DataFrame(np.zeros((9, 9), dtype=int))

def play_sudoku(board):
    global selected_cell, original_board
    original_board = board.copy()  
    initialize_timer()  
    turtle.tracer(0)  
    draw_title()  
    draw_sudoku_grid()  
    draw_numbers(board)  
    draw_timer()  
    turtle.update()  
    turtle.onscreenclick(click)  
    
    selected_cell = (-1, -1)  

def click(x, y):
    global selected_cell, board, original_board
    cell_size = 300 / 9
    col = int((x + 150) // cell_size)
    row = int((150 - y) // cell_size)
    selected_cell = (row, col)
    
    if original_board.iloc[row, col] == 0:  
        num = turtle.numinput("Enter number", f"Enter number for cell ({row+1}, {col+1}):", minval=1, maxval=9)
        
        if num is not None:
            num = int(num)
            if 1 <= num <= 9:
                if check_valid(board, row, col, num):
                    board.iloc[row, col] = num
                    turtle.tracer(0)  
                    turtle.clear()  
                    draw_sudoku_grid()  
                    draw_numbers(board)  
                    draw_timer()  
                    turtle.update()  
                    if is_solved(board):
                        turtle.penup()
                        turtle.goto(0, -200)
                        turtle.pendown()
                        turtle.color("forestgreen")
                        turtle.write("Congratulations! You solved the puzzle!", align="center", font=("Comic Sans MS", 16, "bold"))
                        turtle.done()
                        return  
            else:
                turtle.penup()
                turtle.goto(0, -200)
                turtle.pendown()
                turtle.write("Invalid number! Please enter a number between 1 and 9.", align="center", font=("Comic Sans MS", 12, "normal"))
                turtle.done()

def is_solved(board):
    return (board != 0).all().all()

def main():
    name = input("Enter your name: ")
    print(f"Hello {name}! Welcome to Sudoku game!")
    difficulty = input("Choose difficulty level (easy, medium, hard): ").lower()
    turtle.title("Sudoku Puzzle")
    global board
    board = generate_sudoku_puzzle(difficulty)
    play_sudoku(board)
    turtle.mainloop()

if __name__ == "__main__":
    main()


