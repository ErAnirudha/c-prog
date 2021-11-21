// Write a program in C++ to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"\n Enter num from user:";
cin>>n;
if(n==0){
 cout<<"\n Entered number is zero: \n";
}
else if(n<0){
 cout<<"\n Entered number is negative: \n";
}
else if(n>0){
 cout<<"\n Entered number is positive: \n";
}
 return 0;
}
