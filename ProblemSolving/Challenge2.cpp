#include <iostream>
#include <string>
using namespace std;

// problem 1 :
string even_or_odd(int number) 
{
  return number % 2 == 0 ? "Even" : "Odd";
}
// problem 2 :
string reverseString (string str){
    string reversed = "" ;
    for ( int i = str.length() - 1 ; i>=0 ; i-- ){
         reversed += str[i];
    }
    return reversed;
}
// problem 3 : 
string boolean_to_string(bool b){
    return b == true ? "true" : "false";
  }
int main ()
{
    /////// problem 1 :
    //   int number ;
    //   cout << "enter number : ";
    //   cin >> number ;
    //   cout << "The number is : " << even_or_odd (number) << endl;
    /////// Problem 2 : 
    // string str ;
    // cout << "enter string " ;
    // cin >> str ;
    // cout << " The string after Reversed : " << reverseString(str) << endl ;
    





}