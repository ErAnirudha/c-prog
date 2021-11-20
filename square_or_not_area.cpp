//check its square or not also if its square find
#include<iostream>
using namespace std;
int main(){
//string length,breadth,square;
int length,breadth,square;
cout<<"*******To find area of square******* \nEnter value of length and breadth"<<endl;
cout<<"\nEnter value of length=:";
cin>>length;
cout<<"\nEnter value of breadth=:";
cin>>breadth;
if(length==breadth){
cout<<"\n********Yes its square********"<<endl;
 square=length*breadth;
cout<<"\nAnd area of square is=:"<<square<<endl;
 }
else
cout<<"its not a square (plz enter same value length and breadth for square)";
return 0;

}
