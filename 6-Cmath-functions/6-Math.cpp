#include <iostream>

//MAKE SURE TO INCLUDE THIS LIBRARY
#include <cmath>
using namespace std;


int main(){

//find the highest,lowest,mode,pow,hypot,log,square.... value
/*
int a = 10 ,b = 20, c = 2.8;
//example 1

cout << " The highest value is : " << max(a,b)<<endl;
cout << " The lowest value is : "<< min(a,b)<<endl;
cout << " the square of the first number is : "<< sqrt(a)<<endl;
cout << " The rounded of the second number is : "<< round(c)<<endl;
cout << " the pow is : " << pow(a,b)<<endl;
cout << " The mode is : " << fmod(a,b)<<endl;
cout << " hypot is : "<< hypot(a,b)<<endl;
cout << " The log is "<< log(a)<<endl;
*/



//Example 2
int x=4,y=6;
float z=5.5;
cout << "\n THESE ARE THE PROGRAMM NUMERS X=4 Y=6 Z=5.5 \n\n";

//find the highest between this three number
cout << " Find the highest \n";
cout << " ================\n";
cout << " The highest number between x and y is : " << max(x,y) <<endl;


//find the lowest
cout << "\n The lowest number \n";
cout << " =================\n";
cout << " The lowest number between x and y is : "<< min(x,y) <<endl;


//find the round
cout << "\n The rounded number \n";
cout << " ==================\n";
cout << " the rounded number of z is : "<< round(z) <<endl;

//find the power
cout << "\n find the power of x and y \n";
cout << " ==========================\n";
cout<<  " the power of x and y is : "<< pow(x,y) <<endl;

//find the mode
cout << "\n find the mode between x and y \n";
cout << " ============================\n";
cout << " The mode between x and y is : " << fmod(x,y) <<endl;

//find the hypot
cout << "\n find the hypot between x and y \n";
cout << " =============================\n";
cout << " The hypot between x and y is : "<< hypot(x,y)<<endl;

//find the log
cout << "\n find the log of z\n";
cout << " ==================\n";
cout << " the log of z number is : "<< log(z)<<endl;


return 0;
}
