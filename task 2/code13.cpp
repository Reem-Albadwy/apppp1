

#include <iostream>
using namespace std;

int main()
{/*
	    T&& T&& F&& T                                   [false]

		T&& T&& F&& T || T && T                       [true]

		T && T && T && T || T && (T || F)             [true]

		T && T && T || T && (F || (T && (T && T)))    [true]

		T && T || T && F && T || T && T && F || (T && (T || F)) [true] 
		   t||f||f||t 

		T && T || T && F && T || (T && T && F || (T && (T || F))) [true]
		t||f||t

		T && T || T && F && T || T) && T && F || (T && (T || F))   [true]
		t && t && f || t

		T && T || T && (F && T || T && T) && F || (T && (T || F)   [true]
		t||f ||t
        
		*/
}