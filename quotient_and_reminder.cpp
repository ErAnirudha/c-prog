/*//29. Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1
*/
#include<iostream>
using namespace std;
int main(){
int divisor,dividend,remainder,quotient;
cout<<"*********program to compute quotient and remainder********\n"<<endl;
cout<<"Enter Dividend:";
cin>>dividend;
cout<<"\nEnter Divisor:";
cin>>divisor;
//compute quotient
quotient = dividend / divisor;
cout<<"\nThe quotient of the division is:"<<quotient<<endl;
//compute remainder
remainder = dividend % divisor;
cout<<"\nThe remainder of the division is:"<<remainder<<endl;
return 0;
}
