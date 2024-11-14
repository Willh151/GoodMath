// Will Hancock
// November 14, 2024
// CIS 1202 501

#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0f;
}

int getValidatedInput(const string& prompt)
{
	int num;
	while (true)
	{
		cout << prompt;
		cin >> num;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter an integer." << endl;
		}
		else {
			break;
		}
	}
	return num;
}

int main()
{
	cout << "This program calculates the average of three numbers." << endl;

	int n1 = getValidatedInput("First number: ");
	int n2 = getValidatedInput("Second number: ");
	int n3 = getValidatedInput("Third number: ");

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}
