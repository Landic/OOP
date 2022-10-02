#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"

using namespace std;

int main() {
	Passport pass;
	pass.Input();
	pass.Passport_ID();
	pass.Print();
	cout << endl << endl;
	ForeignPassport pass2;
	pass2.Foreign_Passport_ID();
	pass2.Input_Foreign();
	pass2.Print();
}