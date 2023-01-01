#include<iostream>
using namespace std;
void printName(string name);

main()
{
string name = "Ali";
printName(name);

printName("Bilal");

string secondName;
cout << "Enter Name: ";
cin >> secondName;
printName(secondName);

}

void printName(string name)
{
 cout << "My Name is :"<< name << endl;
}