#include <iostream>
using namespace std;
void isEligible(int age);

main()
{
int age;
while(true)
{
cout <<"Enter your age: ";
cin >> age;
isEligible(age);
}
}



void isEligible(int age)
{
  if (age < 18)
{
    cout <<"Person is not eligible to vote" << endl;
}
  if (age >= 18)
{
    cout <<"Person is eligible to vote" << endl;
}
}