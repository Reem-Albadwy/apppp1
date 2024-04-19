#include <iostream>
using namespace std;
const int specialization = 20;
const int max_queues = 5;
string allnames[specialization][max_queues];
int allstatus[specialization][max_queues];
int queue_len[specialization];
void shift_right(int spec,string names_shift[],int status_shift[]) {
	int len =queue_len[spec];
	for (int i = len - 1;i >= 0;i--) {
		names_shift[i + 1] = names_shift[i];
		status_shift[i + 1] = status_shift[i];
	}
}
void shift_left(int spec, string names_shift[], int status_shift[]) {
	int len = queue_len[spec];
	for (int i = 0;i < len;i++) {
		names_shift[i - 1] = names_shift[i];
		status_shift[i - 1] = status_shift[i];
	}
}
void next_patient() {
	int spec;
	cout << "enter the specialization\n";
	cin >> spec;
	int len = queue_len[spec];
	if (len == 0)
		cout << "no patients in this spec now ,Have rest Dr\n";
	else {
		cout << allnames[spec][0] << " please go to the Dr\n";
		shift_left(spec,allnames[spec],allstatus[spec]);
		queue_len[spec]--;
	}
}
void print_patient(int spec, string names_print[], int status_print[]) {
	int len = queue_len[spec];
	if (len == 0)
		return;
	cout << "there are " << len << " patient in the specialization  " << spec << "\n";
	for (int i = 0;i < len;i++) {
		cout << names_print[i] << " ";
		if (status_print[i])
			cout << "urgent\n";
		else
			cout << "regular\n";
	}
}
void print_patients() {
	cout << "********************************\n";
	for (int spec = 0;spec < specialization;spec++) {
		print_patient(spec, allnames[spec], allstatus[spec]);
	}
}
bool add_patient() {
	int spec;
	string name;
	int status;
	cout << "please,enter the specialization,the name,the status\n";
	cin >> spec >> name >> status;
	int pos = queue_len[spec];
	if (pos >= max_queues) {
		cout << "can't add more to this specialization\n";
		return false;
	}
		if (status == 0) {
			allnames[spec][pos] = name;
			allstatus[spec][pos] = status;
			queue_len[spec]++;
		}
		else {
			shift_right(spec,allnames[spec],allstatus[spec]);
			allnames[spec][0] = name;
			allstatus[spec][0] = status;
			queue_len[spec]++;
		}
		return true;
}
int menu() {
	int choice = -1;
	while (choice == -1) {
		cout << "please select the choice\n";
		cout << "1: add new patients\n";
		cout << "2: print all patients\n";
		cout << "3: get next patient\n";
		cout << "4: exit\n";
		cin >> choice;
		if (!(choice >= 1 && choice <= 4)) {
			cout << "invalid choice..try again\n";
			choice = -1;
		}
	}
			return choice;
}
void hospital_system() {
	while (true) {
		int choice = menu();
		if (choice == 1)
			add_patient();
		else if (choice == 2)
			print_patients();
		else if (choice == 3)
			next_patient();
		else
			break;
	}
}
int main()
{
	hospital_system();
}

