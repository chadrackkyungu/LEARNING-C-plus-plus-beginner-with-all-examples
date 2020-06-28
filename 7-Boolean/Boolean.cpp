#include <iostream>
using namespace std;

int main(){
bool BooleanTrue = true;
bool BooleanFals = false;

//Boolean True  example1
cout << "\n Boolean True \n";
cout << " =============\n";
cout << " This Should give one as the output : " << BooleanTrue <<endl;


//Boolean False  example1
cout << "\n Boolean False \n";
cout << " ============== \n";
cout << " This should give zero as the output : " << BooleanFals <<endl<<endl;


//Example two
int x = 10, Y = 5;

cout << "\n Examine the Boolean \n";
cout << " ===================\n";
cout << " Is X Greater than y if so display 1 or else 0 \t The Answer is: " << (x > Y) << endl<<endl;



//Example three
int a = 20, b =20;
cout << " Is a Equal to b if so display me 1 or alse display 0 ";
cout << " The Answer is : "<< (a == b) <<endl;

return 0;
}
