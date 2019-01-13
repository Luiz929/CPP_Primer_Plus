//https://www.popularmechanics.com/science/g2816/5-simple-math-problems/

#include <iostream>
using namespace std;

inline unsigned long long MagicMethod(unsigned long long magicNumber_P);

int main()
{
	unsigned long long magicNumber;

	cout << "Enter a positive integer number and it must be less than 18446744073709551615:";
	cin >> magicNumber;

	if (magicNumber > ULLONG_MAX)
	{
		cout << "Sorry, the number you entered exceeds the maximum." << endl;
	}
	else
	{
		unsigned long long result = MagicMethod(magicNumber);
		cout << "The result is " << result << endl;
	}

	return 0;
}

inline unsigned long long MagicMethod(unsigned long long magicNumber_P)
{
	while (magicNumber_P != 1)
	{
		if (magicNumber_P % 2 == 0)
		{
			cout << "The number is even now, ";
			magicNumber_P = magicNumber_P / 2;
			cout << "it's equal to " << magicNumber_P << endl;
		}
		else
		{
			cout << "The number is odd now, ";
			magicNumber_P = magicNumber_P * 3 + 1;
			cout << "it's equal to " << magicNumber_P << endl;
		}
	}

	return magicNumber_P;
}
