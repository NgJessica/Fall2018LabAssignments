//LAB 5.6 Student Generated Code Assignments 
//option 1
//Jessica Ng

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPerson = 1;
	int choice;
	int coffee = 0, tea = 0, coke = 0, oj = 0;

	cout << "1.Coffee, 2. Tea 3, Coke 4, Orange Juice." << endl;

	do
	{
		cout << "Please input the favorite beverage of person #" << numPerson << endl;
		cout << ": Choose 1, 2, 3, or 4 from the menu or -1 to exit the program" << endl;;
		cin >> choice;

		if (choice == 1)
			coffee += 1;
		else if (choice == 2)
			tea += 1;
		else if (choice == 3)
			coke += 1;
		else if (choice == 4)
			oj += 1;

		numPerson++;

	} while (choice != -1 );

	cout << "Total number of people surveyed is " << numPerson << ".";
	cout << "The results are as follows:\n\n";

	cout << "Beverage" << setw(22) << "Number of Votes" << endl;
	cout << "******************************" << endl;
	cout << "Coffee" << setw(10) << coffee << endl;
	cout << "Tea" << setw(13) << tea << endl;
	cout << "Coke" << setw(12) << coke << endl;
	cout << "Orange Juice" << setw(4) << oj << endl;


	return 0;
}
