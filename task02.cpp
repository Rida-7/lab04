#include <iostream>
using namespace std;
void add(int num01, int num02);
void multiplication(int num01, int num02);
void subtraction(int num01, int num02);
main()
{
int num01;
int num02;
char operation;
cout << "Enter 1st number: ";
cin >> num01;
cout << "Enter 2nd number: ";
cin >> num02;
cout <<"Operation(+,-,*,/): ";
cin >> operation;

if (operation == '+')
{
add( num01, num02);
}
if (operation == '*')
{
multiplication(num01, num02);
}
if (operation == '-')
{
subtraction(num01, num02);
}
if (operation == '/')
{
cout <<"Operation not available.";
}
}


void add(int num01, int num02)
{
int sum;
sum = num01+ num02;
cout << "Sum is: " << sum << endl;
}

void multiplication(int num01, int num02)
{
int multiplication = num01 * num02;
cout << "Multiplication is: " << multiplication << endl;
}

void subtraction(int num01, int num02)
{
int subtract = num01 - num02;
cout << "Subtraction is: " << subtract <<endl;

}
