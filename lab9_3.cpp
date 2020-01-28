#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ifstream f1("score.txt");	
	string s;
	while (getline(f1,s)){		
		f2 << s << "\n";
	}
	f1.close();
	f2 << "-------------------- SOTUS ---------------------";
	f2.close();
	
	return 0;
}


//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
