#include <iostream>

using namespace std;

int main()
{
	int number,digit1,digit2;
	

	cout << "Please enter a two digit integer: ";
	cin >> number;
         digit1 = (number / 10) + '0';
	 digit2 = (number % 10) + '0';

	if (digit1 == '1')
	{
	switch (digit2)
	{
		case '0':
			cout << "Ten";
			break;
		case '1':
			cout << "Eleven";
			break;
		case '2':
			cout << "Twelve";
			break;
		case '3':
			cout << "Thirteen";
			break;
		case '4':
			cout << "Fourteen";
			break;
		case '5':
			cout << "Fifteen";
			break;
		case '6':
			cout << "Sixteen";
			break;
		case '7':
			cout << "Seventeen";
			break;
		case '8':
			cout << "Eighteen";
			break;
		case '9':
			cout << "Nineteen";
			break;
	}
	}
	else
	{
	switch (digit1)
	{
		case '2':
			cout << "Twenty";
			break;
		case '3':
			cout << "Thirty";
			break;
		case '4':
			cout << "Fourty";
			break;
		case '5':
			cout << "Fifty";
			break;
		case '6':
			cout << "Sixty";
			break;
		case '7':
			cout << "Seventy";
			break;
		case '8':
			cout << "Eighty";
			break;
		case '9':
			cout << "Ninety";
			break;
	}
	switch (digit2)
	{
		case '1':
			cout << "-one";
			break;
		case '2':
			cout << "-two";
			break;
		case '3':
			cout << "-three";
			break;
		case '4':
			cout << "-four";
			break;
		case '5':
			cout << "-five";
			break;
		case '6':
			cout << "-six";
			break;
		case '7':
			cout << "-seven";
			break;
		case '8':
			cout << "-eight";
			break;
		case '9':
			cout << "-nine";
			break;
		default:
			cout << "";
			break;
	}
	}
	return 0;
}
