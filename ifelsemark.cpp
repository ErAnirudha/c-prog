#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"\nEnter values your marks:";
cin>>marks;
//marks greater than 75 marks distinction
//marks 75 to 60 first class
//marks between 60 to 35 second class
// marks less than 35 fail
if(marks>= 75){
cout<<"you got distinction:";
}
else if(marks>60 && 75 > marks){
cout<<"you got first class";
}
else if(marks<60 && 35 < marks){
 cout<<"you got second class";
}
else{
cout<<"Yor are fail";
}
return 0;
}
