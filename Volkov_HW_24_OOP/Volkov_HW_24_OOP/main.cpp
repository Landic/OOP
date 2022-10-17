#include <iostream>
#include <fstream>

using namespace std;

class Directory {
	string name_firm;
	string name;
	string phone;
	string adress;
	string career;
public:
	Directory() = default;
	Directory(string value_name_firm, string value_name, string value_phone, string value_adress, string value_career) {
		name_firm = value_name_firm;
		name = value_name;
		phone = value_phone;
		adress = value_adress;
		career = value_career;
	}
	void Save_File() {
		ofstream save("Data.txt", ios::app);
		save << name_firm << endl << name << endl << phone << endl << adress << endl << career << endl;
		save.close();
	}
	void Print() {
		Directory temp;
		ifstream r("Data.txt");
		do
		{
			r >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
		} while (!r.eof());
		r.close();
	}

	void Search_Name(string value_name) {
		Directory temp;
		ifstream a("Data.txt");
		while (!a.eof()) {
			a >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			if (value_name == temp.name) {
				cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
				break;
			}
		}
		a.close();
	}

	void Search_Phone(string value_phone) {
		Directory temp;
		ifstream a("Data.txt");
		while (!a.eof()) {
			a >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			if (value_phone == temp.phone) {
				cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
				break;
			}
		}
		a.close();
	}

	void Search_Name_Firm(string value_name_firm) {
		Directory temp;
		ifstream a("Data.txt");
		while (!a.eof()) {
			a >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			if (value_name_firm == temp.name_firm) {
				cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
				break;
			}
		}
		a.close();
	}

	void Search_Career(string value_career) {
		Directory temp;
		ifstream a("Data.txt");
		while (!a.eof()) {
			a >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			if (value_career == temp.career) {
				cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
				break;
			}
		}
		a.close();
	}

	void Search_Adress(string value_adress) {
		Directory temp;
		ifstream a("Data.txt");
		while (!a.eof()) {
			a >> temp.name_firm >> temp.name >> temp.phone >> temp.adress >> temp.career;
			if (value_adress == temp.adress) {
				cout << "Name firm: " << temp.name_firm << endl << "Name: " << temp.name << endl << "Phone: " << temp.phone << endl << "Adress: " << temp.adress << endl << "Career: " << temp.career << endl;
				break;
			}
		}
		a.close();
	}

};



int main() {
	Directory obj1("HZ", "Joe", "+380213512312", "DSADAS", "HZ");
	Directory obj2("HZ2", "Obama", "+31261231231", "QWEWQ", "HZ2");
	//obj1.Save_File();
	//obj2.Save_File();
	obj2.Print();
	cout << "---------------------------------------------------" << endl;
	Directory obj3;
	obj3.Search_Name("Obama");
	obj3.Print();
	cout << "---------------------------------------------------" << endl;
	Directory obj4;
	obj4.Search_Phone("+31261231231");
	obj4.Print();
	cout << "---------------------------------------------------" << endl;
	Directory obj5;
	obj5.Search_Adress("QWEWQ");
	obj5.Print();
	cout << "---------------------------------------------------" << endl;
	Directory obj6;
	obj6.Search_Name_Firm("HZ2");
	obj6.Print();
	cout << "---------------------------------------------------" << endl;
	Directory obj7;
	obj7.Search_Career("HZ");
	obj7.Print();
}