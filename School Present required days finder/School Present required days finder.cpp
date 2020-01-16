#include <iostream>

using namespace std;

// We are going to Design our program bit by bit
// like one  function doing one job
// and other one taking arguments and doing calculation
// for fiding reqquired days to be present in school
// we need to get the user total days he went to school
// or his current present percentage.

int userInput()
{
	cout << "Enter your percentage: ";
	int x{};
	cin >> x;
	return x;
}


void findDaysRequired(double x)
{
	double converPerToDecimal{ x / 100 };
	double doMath{ converPerToDecimal * 365 };		// so it will find Perctange of 365 days for eg 50% of 365 days.
	if (doMath < 273.75)
	{
		cout << "You Need " << 273.75 - doMath << " Days Required to go.\n\n";
	}
	else
	{
		cout << "You Already have achieved more than 75% " << doMath - 273.75 << "+ Days\n\n";
	}
}

int main()
{
	//get user percentage
	//userInput()

	//find the days required for getting 75%
	//findDaysRequired()
	while (true)
	{
		int input{ userInput() };
		findDaysRequired(input);
	}
	
	return 0;
}