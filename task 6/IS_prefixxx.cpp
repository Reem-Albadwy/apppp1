#include <iostream>
using namespace std;
string sub = "";
bool isprefix = false;
bool is_prefix(string main, string prefix, int pos) {
	if (pos == main.size()) //baseline
		isprefix = false;
	else {
		sub += main[pos];
		pos++;
		if (sub == prefix) {
			isprefix = true;
			return isprefix;
		}
		else
			is_prefix(main, prefix, pos);
	}
	return isprefix;
}
int main()
{
	string main;
	string prefix;
	int pos = 0;
	cout << "enter the main string and the prefix\n";
	cin >> main >> prefix;
	bool res = is_prefix(main, prefix, pos);
	cout << res << "\n";
}


