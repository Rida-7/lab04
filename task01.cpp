#include <iostream>
using namespace std;
void add(int num01, int num02);
void multiplication(int num01, int num02);
void subtraction(int num01, int num02);
main()
{
int num01;
int num02;
cout << "Enter 1st number: ";
cin >> num01;
cout << "Enter 2nd number: ";
cin >> num02;

add(num01, num02);
multiplication(num01, num02);
subtraction(num01, num02);
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
