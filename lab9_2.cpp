#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ifstream f1("cheerbook.txt");
	ofstream f2("cheerbook_copy.txt");
	string s;
	while (getline(f1,s)){		
		f2 << s << "\n";
	}
	f1.close();
	f2 << "-------------------- SOTUS ---------------------";
	f2.close();
	
	return 0;
}

//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
