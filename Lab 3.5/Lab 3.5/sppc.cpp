//Assignment 1: Lab 3.5
//OPTION 2: Style Price Per Chair

//This program prints the total sale for each style chair

// Jessica Ng

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float americanColonial, modern, frenchClassical;			//number of chairs
	float totalAmeCol, totalModern, totalFreCla, totalSales;	//total cost of chairs

	cout << "Please input the number of American Colonial chairs sold" << endl;
	cin >> americanColonial;

	cout << "Please input the number of Modern chairs sold" << endl;
	cin >> modern;

	cout << "Please input the number of French Classical chairs sold" << endl;
	cin >> frenchClassical;

	//calculate total cost for chairs
	totalAmeCol = americanColonial * 85.00;
	totalModern = modern * 57.50;
	totalFreCla = frenchClassical * 127.75;
	totalSales = totalAmeCol + totalModern + totalFreCla;

	cout << setprecision(2) << fixed << showpoint<<endl;	//format output
	cout << "The total sales of American Colonial chairs $" << totalAmeCol << endl;
	cout << "The total sales of Modern chairs $" << totalModern << endl;
	cout << "The total sales of French Classical chairs $" << totalFreCla << endl;
	cout << "The total sales of all chairs $" << totalSales << endl;

	return 0;
}