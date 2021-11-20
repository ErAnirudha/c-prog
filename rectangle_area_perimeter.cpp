//check its rectangle or not also if its rectangle find area and perimeter
#include<iostream>
using namespace std;
int main(){
//string length,breadth,rectangle;
int length,breadth,rectangle,perimeter;
cout<<"*******To find area of rectangle******* \nEnter value of length and breadth"<<endl;
cout<<"\nEnter value of length=:";
cin>>length;
cout<<"\nEnter value of breadth=:";
cin>>breadth;
if(length!=breadth){
cout<<"\n********Yes its rectangle********"<<endl;
 rectangle=length*breadth;
cout<<"\nAnd area of rectangle is=:"<<rectangle<<endl;
 perimeter=2*(length+breadth);
cout<<"\nAnd perimeter of rectangle is=:"<<perimeter<<endl;
 }
else
cout<<"its not a rectangle (plz enter different value length and breadth for rectangle)";
return 0;

}
