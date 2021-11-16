#include<iostream>
using namespace std;
int main(){
int days;
cout<<"\nEnter values for days:";
cin>>days;
//days 1 to 7 sun,mon,tue,wed,thu,fri,sat
//ie.1 for sun , 2 for mon and so on...
//if no entered other than 1 to 7 give message wrong input
if(days==1){
cout<<"its sunday:";
}
else if (days==2){
cout<<"its monday";
}
else if (days==3){
cout<<"its tuesday";
}
else if (days==4){
cout<<"its wednesday";
}
else if (days==5){
cout<<"its thursday";
}
else if (days==6){
cout<<"its friday";
}
else if (days==7){
cout<<"its saturday";
}
else {
cout<<"You entered wrong Input";
}
return 0;
}
