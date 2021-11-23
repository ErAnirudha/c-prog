#include<iostream>
using namespace std;
int main(){
int n;

cout<<"\n PLz insert how much size of array you want to create=:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

  for (int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      if(arr[i]>arr[j]){
          int arr_temp=arr[i];
         arr[i]=arr[j];
         arr[j]=arr_temp;
      }

    }

    for(int i=0;i<n; i++){
    cout<<arr[i]<<" ";

    }

return 0;

}

