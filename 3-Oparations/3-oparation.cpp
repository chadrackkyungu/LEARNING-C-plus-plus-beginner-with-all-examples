#include <iostream>
using namespace std;

int main()
{
int a,b;
int sum,substraction,multiplication,reminder;
float division;

cout <<" \n\n This Program Will spock About oparations in c++ \n";
cout <<" ===============================================\n\n";
cout <<" Enter two number to calculate the oparation for you \n\n";

cout <<" Enter first number: ";
cin >> a; cout<<endl;
cout <<" Enter the second number: ";
cin >> b; cout <<endl;

// the sum of 2 number
sum = a + b;
cout <<" The sum of the 2 number is :"<<sum<<"\n\n";


// the substraction of the 2 numbers
substraction = a - b;
cout <<" The substraction of the 2 numbers is :" << substraction <<"\n\n";

//the multiplication
multiplication = a * b;
cout <<" The multiplication is : " << multiplication <<"\n\n";

//the division
division = a / b;
cout <<" The division is : "<< division <<"\n\n";

//the reminder
reminder = a % b;
cout << " the reminder is : "<< reminder <<"\n\n";

return 0;
}
