// Jessica Ng

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	cout << "This program ends when you enter x" << endl;

	do
	{
		cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	} while (letter != 'x');
	return 0;
}


