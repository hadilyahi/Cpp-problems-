#include <iostream>
#include <string>
using namespace std;

// problem 1 :
std::string even_or_odd(int number) 
{
  return number % 2 == 0 ? "Even" : "Odd";
}

int main ()
{
    // problem 1 :
    int number ;
   cout << "enter number : ";
   cin >> number ;
   cout << "The number is : " << even_or_odd (number) << endl;
   

}