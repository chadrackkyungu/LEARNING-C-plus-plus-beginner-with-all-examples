#include <iostream>

using namespace std;
int main()
{
//Example 1
/*
    cout << " the loop structure is : \n";
  for(int i =1; i< 5; i++)
  {
      cout << " The loop is : " << i <<endl;
  }
==========end===========*/

//Example 2
/*
int condition;
cout<< "\n Insert Your Condition : ";
cin >> condition; cout <<endl;

for(int i=1; i<condition; i++)
{
    cout << " Your loop is : " << i <<endl;
}
===========end==========*/


//Example 3 if and break
/*
int condition;
cout << " Enter your condition : "; cin >> condition; cout <<endl;

for(int i=0; i<condition; i++)
{

    if(i==5){
        break;
    }
    cout << " The loop is : " << i <<endl;
}
================end=============*/

//Example 4
/*
int condition;
cout << " Insert your condition : "; cin >> condition;cout <<endl;

for(int i=0; i <condition; i++)
{
    if(i == 7){

        continue; //this makes your program to junp number 7
    }
    cout << " The loop is : " << i <<endl;
}

============end=========*/
//Example  5 using integers
/*
int numbers[] = {10,15,20,25,30,6,5,12,23,18};

for(int i=0; i<10; i++)
{
    cout << "\n " << i << " = " << numbers[i]; cout <<endl;
}
============end==========*/



//Example 6 using string
/*
string Names[] = {"chadrack", "john", "jeff", "kerene", "kaba"};

for(int i=0; i< 5; i++)
{
    cout << "\n\n >> " << i << " = " << Names[i]; cout<<endl;
}
===========end=========*/
//Example 7
/*
int numbers[] = {10,20,30,15};
int store;

for(int i=0; i<4; i++)
{
    store = numbers[i]; //using a variable to store

    cout << "\n >> " << i << " = " << store <<endl;
}

===========end===========*/

//Example 8 sum
/*
int Input_numbers;
int sum = 0;

 cout << "\n CALCULATE THE SUM OF ALL THE NUMBERS \n";
 cout << " =====================================\n";

for(int i=1; i<5; i++)
{
    cout << " Input number " << i << ":"; cin >> Input_numbers;

    sum = sum + Input_numbers;
}

cout << " The Sum of all the numbers are : " << sum <<endl;

    return 0;
}

===============end===============*/


//Example 9 print a pyramide
/*
for(int i=0; i<5; i++)
{

    for(int z=0; z<5; z++)
    {

    cout << "";
    }


    for(int y =0; y<6; y++)
    {
        cout << "*";
    }
    cout <<endl;
}
*/

/*
//SUM IN AN ARRAY
int numbers[] ={20,25,64,32,89},result =0;

for(int i =0; i<5; i++)
{
    result = result + numbers[i];
    cout << " " << numbers[i] <<endl;

}
cout << " The Result is : " << result;

*/

//MULTIPLICATIO
/*
int number,sum=0;

cout << " Enter a number to perform the the time tab multiplication : ";
cin>> number; cout <<endl;

for(int i=0; i<number; i++)
{
    sum += i * i;
    cout << " " << i << " * " << i << " = " << i*i <<endl;

}
cout << " the sum of the above numbers are : " << sum <<endl;

}
*/

//EXAMPLE 12
/*

int n, sum = 0, sum2;

cout << " Insert a number : "; cin >> n; cout<< endl;

for(int i=1; i<n; i++)
{
    sum2 = 0;
    for(int j=1; j<i; j++){

        sum +=j;
        sum2 +=j;
        cout << j;

        if(j<i)
        {
            cout << " + ";
        }
    }

    cout << " = " << sum2 <<endl;
 }

-*/
/*
int sum=0,n;

cout << " Enter a condition : "; cin >> n; cout <<endl;

for(int i=0; i<n; i++){

    cout << i << " " <<endl;;
    sum = sum +i;
}
cout << " The sum of natural number is : "<< sum <<endl;
*/



//CHECKING FOR THE PRIME NUMBER
/*
int num1, ctr=0;

cout << " Enter a number : ";cin >> num1; cout <<endl;

for(int i=1; i<= num1; i++)
{
    if(num1 % i == 0){
        ctr++;
    }
}
if(ctr == 2){
    cout << " The number Enter is a prime number \n";

}else{
    cout <<" The number enter is a odd number \n";
}*/




//C++ PARTERN EXAMPLE 1*
/*
int rows;
cout << " Enter a number to represente the rows : \n";
cout << " =====================================\n";
cin >> rows; cout <<endl;

for(int j=1; j<=rows; j++){

    for(int i=1; i<=j; i++)
    {
        //cout << "*";
        cout << i ;
    }
cout <<endl;
}
*/


//C++ PARTERN EXAMPLE 2*

int rows, t=1, space;
cout << " Enter a number to represente the row : ";
cin >> rows; cout <<endl;

space = rows +4-1;


for(int i=1; i<=rows; i++){


    for(int k=space; k>=1; k--){
        cout <<" ";
    }

    for(int j=1; j<=i; j++)
       // cout << i << " ";
       cout << "*" << " ";
        cout << endl;
     space--;

}

}





