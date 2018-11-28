#include <iostream>
#include <vector> //To create an vector object, you need to include the vector header file
#include <array> //To create an array object, you need to include the array header file.

int main()
{
	using namespace std; //use a using directive,a using declaration, or std::vector.

	double a1[4] = { 1.2, 2.4, 3.6, 4.8 }; // C, original C++

	vector<double> a2(4); // C++98 STL
						  // no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 }; // C++11
	array<double, 4> a4;
	a4 = a3;

	// use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	// misdeed
	a1[-2] = 20.2;
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	return 0;
}