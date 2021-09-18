// This program finds the average time spent programming by a student
// each day over a three day period.

// Jessica Ng

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total1, total2, average1, average2;
	string subject1,subject2;
	int student, day = 0, days;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		<< " that a student spent programming over a long weekend\n\n";
	cout << "How many days?" << endl;
	cin >> days;
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
	cout << "What 2 subjects?";
	cin >> subject1 >> subject1;

	for (student = 1; student <= numStudents; student++)
	{
		total1 = 0;
		total2 = 0;
		//--------SUBJECT 1-----------------------------------------------------------------
		for (day = 1; day <= days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				<< student << " on day " << day << "for subect" << subject1 << "." << endl;
			cin >> numHours;

			total1 = total1 + numHours;
		}

		average1 = total1 / days;

		cout << endl;
		cout << "The average number of hours per day spent on" <<subject1<<" by "
			<< "student " << student << " is " << average1
			<< endl << endl << endl;
		//-------SUBJECT 2------------------------------------------------------------------
		for (day = 1; day <= days; day++)
		{
			cout << "Please enter the number of hours worked by student "
				<< student << " on day " << day << "for subect" << subject2 << "." << endl;
			cin >> numHours;

			total2 = total2 + numHours;
		}
		average2 = total2 / days;

		cout << endl;
		cout << "The average number of hours per day spent on" << subject2 << " by "
			<< "student " << student << " is " << average2
			<< endl << endl << endl;

		if (average1 > average2)
			cout << "On average " << student << "spends the most time studying on " << subject1;
		else
			cout << "On average " << student << "spends the most time studying on " << subject2;
	}


	return 0;
}