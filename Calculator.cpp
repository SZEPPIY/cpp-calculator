#include<iostream>
#include<windows.h>
using namespace std;

int main()
{




	char operation, Proceed;
	double number1, number2, final;



	do
	{
		cout << "=========================================" << endl;
		cout << "||                                     ||" << endl;
		cout << "||             CALCULATOR              ||" << endl;
		cout << "||                                     ||" << endl;
		cout << "=========================================" << endl;



		final = 0;



		cout << "Give your first number!";
		cin >> number1;



		cout << "Choose an operator (+,-,*,/) for the numbers";
		cin >> operation;


		cout << "Give your second number!";
		cin >> number2;




		if (operation == '/')
		{
			while (number2 == 0)
			{
				cout << "The second number cannot be 0, please give it again!";
				cin >> number2;
			}
		}

		if (operation == '+')
		{
			final = number1 + number2;
			cout << "\n========================================" << endl;
			cout << "  Result: " << final << endl;
			cout << "========================================" << endl;
		}
		else if (operation == '-')
		{
			final = number1 - number2;
			cout << "\n========================================" << endl;
			cout << "  Result: " << final << endl;
			cout << "========================================" << endl;
		}
		else if (operation == '/')
		{
			final = number1 / number2;
			cout << "\n========================================" << endl;
			cout << "  Result: " << final << endl;
			cout << "========================================" << endl;

		}
		else if (operation == '*')
		{
			final = number1 * number2;
			cout << "\n========================================" << endl;
			cout << "  Result: " << final << endl;
			cout << "========================================" << endl;

		}

		cout << "Would you like to continue? (Y/N)";
		cin >> Proceed;
		cout << "\n----------------------------------------\n" << endl;

	} while (Proceed == 'Y');

	return 0;
}



