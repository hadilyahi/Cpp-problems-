#include <iostream>
using namespace std;

// problem 1 :
int simpleMultiplication(int a)
{
    // if(a % 2 ==0){
    //    return a * 8;
    // }
    // else
    // {
    //     return a * 9 ;
    // }
    return a % 2 == 0 ? a * 8 : a * 9;
}
// problem 2 :
int centuryFromYear(int year){
    if( year % 100 == 0 ){
      return year / 100 ;
    }
    else{
        return year / 100 + 1;
    }
}
int main (){
    // problem 1 :
    // int number ;
    // cout << "enter number : ";
    // cin >> number ;
    // cout << "the result is : " << simpleMultiplication(number) << endl;
    // problem 2 : 
    int year ;
    cout << " enter A year : ";
    cin >> year ;
    cout << "the year is a century form year : "<< centuryFromYear(year) << endl;
    

    return 0 ;
}