#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string buffer;
	string str[50];
	int amount = 0;
	fstream val("HW.html", ios::in);
	if (val) {
		while (!val.eof()) {
			val >> buffer;
			if (buffer == "<html" || buffer == "</html>" || buffer == "<head>" || buffer == "</head>" || buffer == "<title>" || buffer == "</title>" || buffer == "<body>" || buffer == "</body>") {
				str[amount] = buffer;
				amount++;
			}
		}
	}
	else {
		cout << "Error open file!" << endl;
	}
	if (str[2] != "<<title>" && str[3] != "</title>") {
		cout << "Error title" << endl;
	}
	else if (str[0] != "<html" && str[7] != "</html>") {
		cout << "Error html" << endl;
	}
	else if (str[1] != "<head>" && str[4] != "</head>") {
		cout << "Error head" << endl;
	}
	else if (str[5] != "<body>" && str[6] != "</body>") {
		cout << "Error body" << endl;
	}
	else {
		cout << "Okay!" << endl;
	}
}