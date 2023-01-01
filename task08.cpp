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
int output01, output02,payableAmount01,payableAmount02;
if (day == "sunday")
 {
output01 =(10*amount)/100;
payableAmount01 = amount - output01;

cout << "Payable amount is: " << payableAmount01 << endl;
}
if (day != "sunday")
{
output02 = (5*amount)/100;
payableAmount02 = amount - output02;
cout << "Payable amonut is: " << payableAmount02 << endl;
}


}




