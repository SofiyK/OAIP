#include <iostream>
#include<string>

using namespace std;
int main()
{
	setlocale(0, "");
	int i, lenght;
	string s,r;
	cout << "\nВведите строку: ";
	getline(cin,s);
	for (i = 0;i < s.size();i++) {
		if (s[i] == ' ') {
			if ((s[i + 1] != ' ') && (i + 1 != s.size())) {
				r += ", ";
			} 
		}
		else {
			r += s[i];
		}
	}

	cout <<"\nИсходная строка: " << s << endl;
	cout << "\nИзмененная строка: " << r << endl;
}
