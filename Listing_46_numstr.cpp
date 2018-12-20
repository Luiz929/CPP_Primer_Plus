// numstr.cpp -- folowing number input with line input

//method 1 
//cin >> year;
//cin.get();

//method 2
//(cin >> year).get();

#include <iostream>

int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}
