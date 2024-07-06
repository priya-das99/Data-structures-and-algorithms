#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the no of element"<<endl;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
    cout<<"Before reversing the numbers are:"<<endl;
}
for (int i=0,j=n-1;i<j;i++,j--){
swap(arr[i],arr[j]);
cout<<"after reversing the numbers are:"<<endl;
}
}

