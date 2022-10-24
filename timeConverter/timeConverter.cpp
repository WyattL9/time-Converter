// Wyatt Lester
// Date: 10/24/22
// Program Title: Time Converter
// Program Description: converts the time from 24-hour notation to 12-hour notation and vice versa.

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

// functions
void c24to12AM(int x, int y); //converts time from 24-hour notation to 12-hour for the morning hours
void c24to12PM(int x, int y); //converts time from 24-hour notation to 12-hour for the evening hours
void c12to24AM(int x, int y); //converts time from 12-hour notation to 24-hour for the morning hours
void c12to24PM(int x, int y); //converts time from 12-hour notation to 24-hour for the evening hours

int main()
{

	// Variable declaration
	int hour, minute, choice1, choice2;
	

	//Program title and description for the user
	cout << "Program Title: Time Converter" << endl;
	cout << "Program Description: Converts the time from 24-hour notation to 12-hour notation and vice versa." << endl;

	// User input
	do{
		cout << "Would you like to convert to 24-hour or 12-hour notation?" << endl;
		cout << "Enter '1' to convert 24-hour to 12-hour notation." << endl;
		cout << "Enter '2' to convert 12-hour to 24-hour notation." << endl;
		cin >> choice1;

		if (choice1 != 1 && choice1 != 2)
			cout << "Invalid input. Please try again." << endl;

	}while (choice1 != 1 && choice1 != 2);

	if (choice1 == 1) {
		cout << "Please input the time in the format of 'hours minutes'. For example if it were 16:37 you would input '16 37'." << endl;
		cin >> hour;
		cin >> minute;

		if (hour >= 12) {
			c24to12PM(hour, minute);
		}
		else
			c24to12AM(hour, minute);
			
	}

	if (choice1 == 2) {
		cout << "Please input the time in the format of 'hours minutes'. For example if it were 6:37 you would input '16 37'." << endl;
		cin >> hour;
		cin >> minute;

	do{
		cout << "Is the time you entered in the AM or PM?" << endl;
		cout << "Enter '1' for AM." << endl;
		cout << "Enter '2' for PM." << endl;
		cin >> choice2;

		if (choice2 != 1 && choice2 != 2)
			cout << "Invalid input. Please try again." << endl;

	}while (choice2 != 1 && choice2 != 2);

		if (choice2 == 2) {
			c12to24PM(hour, minute);
		}

		if (choice2 == 1) {
			c12to24AM(hour, minute);
		}
		
	}

	return 0;
}

void c24to12AM(int x, int y){
	if (y == 0 && x == 0)
		cout << "The time in 12-hour notation is " << "12" << ":" << "00" << " AM." << endl;
	else if (x == 0)
		cout << "The time in 12-hour notation is " << "12" << ":" << y << " AM." << endl;
	else if (y == 0)
		cout << "The time in 12-hour notation is " << x << ":" << "00" << " AM." << endl;
	else
		cout << "The time in 12-hour notation is " << x << ":" << y << " AM." << endl;
}

void c24to12PM(int x, int y) {
	x = x - 12;
	if (y == 0 && x == 0)
		cout << "The time in 12-hour notation is " << "12" << ":" << "00" << " PM." << endl;
	else if (x == 0)
		cout << "The time in 12-hour notation is " << "12" << ":" << y << " PM." << endl;
	else if (y == 0)
		cout << "The time in 12-hour notation is " << x << ":" << "00" << " PM." << endl;
	else
		cout << "The time in 12-hour notation is " << x << ":" << y << " PM." << endl;
}

void c12to24AM(int x, int y) {
	if (x == 12)
		if (y == 0)
			cout << "The time in 24-hour notation is " << "0:" << "00" << endl;
		else
			cout << "The time in 24-hour notation is " << "0:" << y << endl;
	else
		if (y == 0)
			cout << "The time in 24-hour notation is " << x << ":" << "00" << endl;
		else
			cout << "The time in 24-hour notation is " << x << ":" << x << endl;
}

void c12to24PM(int x, int y) {
	if (x == 12)
		if (y == 0)
			cout << "The time in 24-hour notation is " << x << ":" << "00" << endl;
		else
			cout << "The time in 24-hour notation is " << x << ":" << y << endl;
	else
		x = x + 12;
	if (y == 0)
		cout << "The time in 24-hour notation is " << x << ":" << "00" << endl;
	else
		cout << "The time in 24-hour notation is " << x << ":" << y << endl;
}