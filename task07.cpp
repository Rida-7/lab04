#include <iostream>
using namespace std;

void totalAmount(string day, int amount);

main()
{
string day;
int amount;
while(true)
{
cout << "Enter day: ";
cin >> day;
cout << "Enter amount: ";
cin >> amount;

totalAmount(day, amount);
}
}


void totalAmount(string day, int amount)
{
int output,payableAmount;
if (day == "sunday")
 {
output = (10*amount)/100;
payableAmount = amount - output;
cout << "Payable amount is: " << payableAmount << endl;
}
if (day != "sunday")
{
cout << "Payable amonut is: " << amount << endl;
}


}




