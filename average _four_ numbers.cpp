/* Write a program in C++ to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
*/
#include<iostream>
using namespace std;
int main(){
double n,n1,n2,n3,n4,Avg;
cout<<"********Compute the total and average of four numbers*******";
cout<<"\n Enter four values:";
cin>>n1;
cin>>n2;
cin>>n3;
cin>>n4;
n = n1 + n2 + n3 + n4;
cout<<"\n addition is:"<<n<<endl;
 Avg = n / 4;
cout<<"\n Average is:"<<Avg<<endl;
return 0;
}
