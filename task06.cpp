#include <iostream>
using namespace std;
void greaterNumber(int firstNumber, int secondNumber);

main()
{ 
int firstNumber;
int secondNumber;
while(true)
{
cout <<"Enter first number: ";
cin >> firstNumber;
cout <<"Enter second number: ";
cin >> secondNumber;

greaterNumber(firstNumber, secondNumber);
}
}


void greaterNumber(int firstNumber, int secondNumber)
{
if (firstNumber > secondNumber)
{
  cout << "First number is Greater" << endl;
}
if (firstNumber < secondNumber)
{
  cout << "Second number is Greater" << endl;
}


}