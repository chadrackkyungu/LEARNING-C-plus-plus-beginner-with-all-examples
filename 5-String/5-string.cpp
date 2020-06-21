#include <iostream>
using namespace std;

int main(){
//CONCATENATE A STRING
cout<< " concatenate the string \n";
cout<< " ======================\n";
string name,surname,fullName;

name="chadrack";
surname =" kyungu";


fullName = name + surname;
cout << " the full name is " << fullName << "  "<<endl<<endl;


//EXAMPLE 2
string a,b,c;
a = "100000";
b = " 566223";
c = a + b;
cout << " The length is "<< c <<"  "<<endl<<endl;
//END CONCATINATION


//FINDING THE LENGTH OF A STRING WITH LENGTH
cout << " \n finding the length of the string with length \n";
cout << " ==========================================\n";
fullName;
cout << " The Lenght of the string "<< fullName << " is " << fullName.length() << " "<<endl;



//FINDING THE LENGTH WITH SIZE
cout << " \n finding the length of the string with size \n";
cout << " ==========================================\n";
fullName;
cout <<" The length of the string " << fullName << " is : "<< fullName.size() << "\n";



//ACCESSING THE STRING
cout<< " \n Accessing the string\n";
cout<< " ======================\n";
string access_string ="MAMAN";  //the rull is it will staRt counting from 0 THEN GOING UP
cout << " The string access is " << access_string[1] <<endl;
cout << " The string access is "<< access_string[0] <<endl;




//REPLACING A LETTER INTO THE STRING
cout<< " \n Passing something to the string\n";
cout<< " =================================\n";
string name2 = "joho";
cout << " the Wrong is " << name2<<endl;

name2[3] = 'n';
cout << " the correct name is : "<< name2<<endl<<endl;

//example 2
string name3 = "kerine";
cout << " The Wrong name is :"<< name3 <<endl;
name3[3]= 'e' ;
cout << " the correct name is :"<< name3<<endl<<endl;


//example 3
string name4 = "chal";
cout << " The Wrong name is : "<<name4 <<endl;
name4[3] = 'd';
cout<< " The Correct name is : "<<name4 <<endl;



return 0;
}
