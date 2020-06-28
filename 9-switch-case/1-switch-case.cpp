#include <iostream>
using namespace std;

int main()
{
//INTRODUCTION TO SWITCH CASE
/*
int days;
cout << " Enter a number that will represente days of a week : ";
cin >> days;

switch(days){
case 1:
    cout << " Monday ";
    break;
case 2:
    cout << " Tusday ";
    break;
case 3:
    cout << " Wensday ";
    break;
case 4:
    cout << " thursday ";
    break;
case 5:
    cout << " Friday ";
    break;
case 6:
    cout << " Surterday ";
    break;
case 7:
    cout << " sunday ";
    break;

default:
    cout << " You input the wrong number ";

}
=============end===========*/


//Example 2
/*
char letters;
cout << " insert letters : a,b,c,d \n";
cin >> letters; cout <<endl;

switch(letters)
{
case 'a':
    cout << " You got me \n";
    break;
case 'b':
    cout << " You got me again \n";
    break;
case 'c':
    cout << " Hmmm you are very good in guessing \n";
    break;
case 'd':
    cout<< " You won now!!!!";
    break;
default:
    cout << " You have failed \n";
}
====================end===============*/



//Example 3
/*
//this prog will verifie the sign and perfom the calculation

int total1, total2, total3, num1,num2;
char signs;
cout << " Insert an oparations : "; cin >> signs; cout <<endl;

cout << " Insert 2 numer to perform the calculations : ";
cin >> num1 >> num2; cout <<endl;

total1 = num1 + num2;
total2 = num1 - num2;
total3 = num1 * num2;

switch(signs)
{
case '+':
    cout << " The Addition of the 2 number is : " << total1 <<endl;
    break;

case '-':
    cout << " The substraction of the 2 number is : " << total2 <<endl;
    break;

case '*':
    cout << " The multiplication of the 2 number is : " << total3 << endl;
    break;

default:
    cout << " You insert the wrong signs try again \n";
}
=========================end========================*/

int number;
cout << "\n Enter your umber : \n";
cin >> number; cout <<endl;

switch(number){
case 1:
    cout << " You are super!!\n";
    break;

case 2:
    cout << " You are the muster \n";
    break;

case 3:
    cout << " Ohhhp \n";
    break;

case 4:
    cout << " wow \n";
    break;
default:
    cout << " Try againlater \n";
}




return 0;
}
