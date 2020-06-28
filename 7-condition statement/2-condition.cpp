#include <iostream>
//make sure to include this library if you want to display decimal place
#include <iomanip>
using namespace std;

int main(){
//Example 1
//let calculate the radius of a circle
/*
const double PI = 3.14159265;
double radius ;
//double heigth = 15.5
double circle;

cout <<fixed <<showpoint << setprecision(2);
cout << "\n Enter the number of a raius\n";
cin >> radius;cout <<endl;

if(radius > 55.5){
    cout << " The number is too hight \n";

}else{

//calculate the radius
circle = PI * radius * radius;
cout << " The radius of a circle is : " << circle <<endl;
}
============end===============*/




//Example 2
/*
const double interest_rate = 0.015;
double credit_Card_balance;
double payment;
double balance;
double penalty;
//input credit card
cout << " Enter your credit card babalance : ";cin >> credit_Card_balance;
cout <<endl;

//input payment
cout << " Enter Your Payment : "; cin >> payment; cout <<endl;

//find the balance
balance = credit_Card_balance - payment;

if(balance > 0){

    penalty = payment * interest_rate;
    cout << " The balance is : "<< balance <<endl;
    cout << " The penality to ad to your bill is " << penalty <<endl;
}


const double interest_rate = 0.015;
double credit_card, payement, balance, penality;

cout << " Enter Your Credit card balance : "; cin >> credit_card; cout <<endl;
cout << " Enter your Payment : "; cin >> payement; cout <<endl;

//let find the balance
balance = credit_card - payement;

if (balance > 0)
{
    penality = payement * interest_rate;
    cout << " The penality add to your bill is : " << penality <<endl;
    cout << " Your balance is : " << balance <<endl;
}

========end==============*/


//Example 3
/*
//this prog is calculating the hoursworked and if hw exceed 40.0 add rate
//formula: wages = hours_Worked * rate + 1.5 * rate *(hours_Worked - 40.0);

double hwrk,rate;
double Empl_Wages;
cout << " Enter The number of hours worked : ";cin >> hwrk; cout <<endl;
cout << " Enter Your rate : "; cin >> rate; cout <<endl;

cout << fixed << showpoint << setprecision(2); //to display 2 comma

if(hwrk > 40.0)
    {
   Empl_Wages =  hwrk * rate + 1.5 * rate *(hwrk - 40.0);
    cout << " The Employee Wages is : " << Empl_Wages <<endl;
}else{

    Empl_Wages = hwrk * rate;
    cout << " The Employee Wages is : " << Empl_Wages;
}
========end==========*/



/*
//Example 4

//TYPICAL ON AN ECONOMY FLIGHT, IF EITHER THE SUITECASE DIMENSION(lenght+width+deph) IS MORE THAN 108 INCHES  OR THE WEIGHT IS MORE THAN 50 POUND
//, THEN THE AIRLINE MAY APPLY ADDITIONALCHRGES TO THE PASSAGER  DETERMINE IF ADDITIONAL CHARGES MAY BE APPLIED TO THE SUITECASE


double suitecase_dimention, weigth,store;
const double Additional_charges = 20.0;

cout <<fixed << showpoint << setprecision(2);
cout << " Enter Your Suitecase dimention : "; cin >> suitecase_dimention; cout<<endl;
cout << " Enter Your Weight : "; cin >> weigth; cout <<endl;

if(suitecase_dimention > 108 || weigth > 50)
{
    store = (suitecase_dimention + weigth) * Additional_charges;
    cout << " The Additional charge is " << Additional_charges<<endl;
    cout << " The Money to pay is : " <<"R"<< store <<endl;


}else{
    store = suitecase_dimention + weigth;
    cout << " The Money to pay is : " <<"R"<< store <<endl;
    cout << " There is no Additional charge \n";

}

================end====================*/
/*
//Example 5
// find the maximum number

int firsNumber, secondNumber, Store;
cout << "\n Enter Your Numbers to compare : ";
cin >> firsNumber >> secondNumber; cout<<endl;

Store = max(firsNumber, secondNumber);
cout << " The maximum number is : " << Store <<endl;

//COMPARE USING IF STATEMENT

if(firsNumber > secondNumber){
    cout << " The Maximum number is : " << firsNumber << " first number" <<endl;
}else{
    cout << " The maximum number is : " << secondNumber << " second number"<< endl;
}
================end======================*/

//EXample6

//write a program that prompt the user to input the shape type (rectangle, circle, or cylinder ) and the appropiate dimension of the shape
//and the program output the following informtion for the rectangle = area and perimeter, circle = area and circumferance, for cylinder it ouput the the volume
// and the surface and the area
 //circle (area = PI * radius *radius; circumference = 2 *PI * radius)
 //rectangle =( perimeter = 2*(width + lenght), area1 = width*lenght;)
 //cylinder =( volume = PI *radius * radius * height  area = 2*PI*radius*(radius+height);,)
/*
string Shapes;
const double  PI = 3.141531;
double radius,width,lenght,height;
double area,circumference,perimeter,area1,volume;

cout << "\n Enter Your Shape :"; cin >> Shapes; cout << endl;
cout << fixed << showpoint <<setprecision(2);

if(Shapes == "circle")
{
    cout << " Enter the radius : "; cin >> radius; cout <<endl;
    area = PI * radius * radius;
    cout << " The Area is : " << area <<endl;
    circumference = 2 *PI * radius;
    cout << " The circumferences is : " << circumference <<endl;
}

else if(Shapes == "rectangle")
{
    cout << "\n Enter The Width and the Lenght : "; cin >> width >> lenght;
    cout <<endl;

    perimeter = 2*(width + lenght);
    cout << " The perimater of a rectangle is : " << perimeter <<endl;
    area1 = width*lenght;
    cout << " The area of a perimater is : " << area1 <<endl;
}

else if(Shapes == "cylinder")
{
  cout << "\n Enter the heigth of a cylinder : "; cin >> height; cout<<endl;
  cout << " Eneter the radius : "; cin >> radius; cout <<endl;

  volume = PI * radius * radius * height;
  cout << " The Volume of the cylinder is : " << volume <<endl;

  area = 2 * PI*radius*(radius + height);
  cout << " the area of a cylinder is : " << area <<endl;

}
*/

//Example 7
/*
int Password = 123 , Input_pass;

cout << " Enter Your Password : "; cin >> Input_pass; cout<<endl;

if(Password == Input_pass){
    cout << " The password Enter was crrect!!!\n";

}
else{
cout << " The Password you provide is incorrect \n";
cout << " Try again?";
}
===========end============*/


//Example 8
/*
const string Name = "chad";
const string surname = "sam";
const int password = 123;

string input_Name, input_surname;
int input_pass;

cout << " Enter your name and surname : ";
cin >> input_Name >> input_surname; cout <<endl;

cout << " Enter your Password : ";
cin >> input_pass; cout << endl;

if((Name == input_Name) && (surname == input_surname) && (password == input_pass)){

    cout << " Details Enter are corret!!!\n";
    cout << " The Name is : " << Name <<endl;
    cout << " The surname is : " << surname <<endl;
}

else{
cout << " Incorrect details \n";
}
============end================*/







return 0;
}
