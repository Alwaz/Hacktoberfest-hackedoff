//using pass by value
#include <iostream>
using namespace std;
//function declaration
// function returning the swapping between two numbers
int swap(int x, int y) {
   //  variable declaration
   int temp;
   temp=x;
   x=y;        //condition for swapping
   y=temp;
   //pass by value means the actual value is passed on.
 cout<<"AFTER CALLING SWAPPING:"<<endl;
 cout<<"a = "<<x<<" , b ="<<y<<endl;       
} 

 
int main () {
	//call of function
   // variable declaration for passing value:
   int a = 100;
   int b = 200;
   cout<<"BEFORE CALLING SWAPPING:"<<endl;
   cout<<"a = "<<a<<" , b =  "<<b<<endl;
   swap(a,b);
   return 0;
}
 

