#include <iostream>

using namespace std;


int main(){

cout << "\n\n   CONDITION STATEMENTS \n";
cout << "   ====================\n";

//Example 1
int Age = 20;

if (Age>15){

    cout << "\n Your Age is : " << Age <<"\n\n";
}


//Example 2 using cin
int age;
cout << "\n Insert Your Age: "; cin>> age; cout <<endl;

 if(age > 50){
    cout << " You are lying your real age is : "<<age<<"\n\n";
 }

 //Example 3 else
 int Age1, Age2;
 cout << "\n COMPARING TWO PEOPLE AGES. \n\n";
 cout << " ===========================\n ";
 cout << " Enter Age one : "; cin >> Age1; cout <<endl;
 cout << " Enter Age 2 : "; cin >> Age2; cout <<endl;



 if(Age1 > Age2){
    cout << " \n the First one is old!!! and his age is : "<<Age1 <<" Years" <<endl;

 }else{
     cout << "\n The second one is old and his age is : " << Age2 <<" Years"  <<endl;

 }

 //Example 4
 cout << "\n Example 4\n";
 int num1 = 25, num2 = 25;

 if(num1 == num2){
    cout << "\n Forget you can't bit me because you are my age\n";
 }
 else{
    cout << "\n You are like my big brother i can't fight you\n";
 }


 //Example 5 Challenging
 cout << "\n CHALLENGING \n";
 cout << " ============\n";
 cout << " this progamm will calculate the Average of a student and display the grade and the details\n";

 int module1, module2, module3,module4, module5; //Varaibles
 string FullName; //Variable
 int Store; // variable
 float Average; //variable

 cout << " Enter Your Full Name : \n";
 cin >> FullName;

 cout << " Enter Your Modules Maks:";cin>>module1; cin>>module2; cin >> module3;
 cin >>module4; cin >> module5;

//Processing
Store = module1 + module2 + module3 + module4 + module5;


Average = Store / 5;

 if(Average > 74){
    cout << " Your FullName is " << FullName <<"\n";
    cout << " your Marks is : " << Average <<"\n";
    cout << " You Got A distinction \n";
 }else{

 cout << " Your Fullname is :" <<FullName <<"\n";
 cout << " Your Average is : " << Average << "\n";
 cout << " You have passed your exams \n";
 }


//Example 6
//this program will output numbers in the ascending order

int h,r,f;
cout << " Enter Three Numbers to compare :\n";
cin >> h >> r >> f;

if(h>r && h>f && r>f){
    cout << " The order is : " << h <<" " << r <<" " << f;

}else if(h<r && h < f && r < f){

    cout << " The Order is : " << f <<" " << r <<" "<<h;

}
else if(f > h && f > r){
    cout << " The order is : " << f <<" " << h << " " << r <<endl;
}

else if(f < h && f < r){
    cout << " The order is : " << h <<" " << r << " " << f <<endl;
}

else{
    cout << "\n
     Enter the correct number?\n";
}


return 0;
}
