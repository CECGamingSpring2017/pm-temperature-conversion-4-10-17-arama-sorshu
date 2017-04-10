#include<iostream>
using namespace std;
int main() {
	double tempc;
	char scales;

	cout << "Enter a number with data type double." << endl;
	cin >> tempc;
	cout << "Type in either Fahernheit (f), Centigrade(c), or Kelvin(k)." << endl;
	cin >> scales;
	/////////////////////////Fehernheit
	if ((scales == 'f') && (tempc < 33)) {
		cout << "This temp in celsius is " << (tempc - 32)* .56 << endl;
		cout << "This temp in Kelvin is" << .56*(tempc - 32) + 273 << endl;
		cout << tempc << "F" << endl;
		cout << "DAZ COLD" << endl;
	}
	else if ((scales == 'f') && (tempc > 32)) {
		cout << "This temp in celsius is " << (tempc - 32)* .56 << endl;
		cout << "This temp in Kelvin is" << .56*(tempc - 32) + 273 << endl;
		cout << tempc << "F" << endl;
		cout << "Daz hawt" << endl;

	}
	
	/////////////////////////celsius
	else if ((scales == 'c')&&(tempc<1)) {
		cout << "at celsius thats below freezing" << endl;
		cout << "This temp in fahrenheit is" << (tempc + 32)* 1.8 << endl;
		cout << "This temp in Kelvin is" << (tempc + 273) << endl;
		cout << tempc << "C" << endl;
	}
	else if ((scales == 'c') && (tempc>0)) {
		cout << "at celsius thats hot" << endl;
		cout << "This temp in fahrenheit is" << (tempc + 32)* 1.8 << endl;
		cout << "This temp in Kelvin is" << (tempc + 273) << endl;
		cout << tempc << "C" << endl;
	}
	
	/////////////////////////Kelvin
	else if ((scales == 'k')&&(tempc<0)&&(tempc<460.00)) {
		cout << "This temp in celsius is " << (tempc - 32)* .56 << endl;//c
		cout << "This temp in fahrenheit is" << (tempc + 32)* 1.8 << endl;//f
		cout << tempc << "K" << endl;
		cout << "WELCOME TO ABSOLUTE ZERO" << endl;

	}
	else if ((scales == 'k') && (tempc>0) && (tempc>459.67)) {
		cout << "This temp in celsius is " << (tempc - 32)* .56 << endl;//c
		cout << "This temp in fahrenheit is" << (tempc + 32)* 1.8 << endl;//f
		cout << tempc << "K" << endl;
		cout << "higher ;)" << endl;

	}
	
}