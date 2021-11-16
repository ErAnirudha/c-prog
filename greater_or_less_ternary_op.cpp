#include<iostream>
using namespace std;
int main()
 {
 int a=40;
 int b=30;
 //if (a>b){
/*cout<<"a is greater than b";
 }
 else{
 cout<<"a is less than b";
 }
 //variable =condition?true value:false value
 //variable = (condition) ? expressionTrue : expressionFalse; */
 string output = (a>b) ? "a is grater than b": "a is less than b";
 cout<<output;
 b=(a>b)?a:b; // ternary operator overwrite value b
 cout<<"\nAfter ternary op value of b="<<b;
 a=(a<b)?b:a; // overwrite condition
 cout<<"\nAfter ternary op value of a="<<a;
 return 0;
 }
