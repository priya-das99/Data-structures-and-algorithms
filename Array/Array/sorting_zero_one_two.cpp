#include<iostream>
using namespace std;
int main(){
 int arr[]={0,1,2,0,1,2,0,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 int zero=0;
 int one =0;
 int two=0;
 for(int i=0;i<n;i++)
 {
    if(arr[i]==0){
        zero++;
    }
    if(arr[i]==1){
        one++;
    }
    if (arr[i]==2)
    {
        two++;
    }
    
 }
 int idx = 0;
 while(zero!=0)
 {
    arr[idx]=0;
    zero--;
    idx++;
 }
 while(one!=0){
    arr[idx]=1;
    one--;
    idx++;
 }
 while(two!=0){
    arr[idx]=2;
    two--;
    idx++;
 }
 
 cout<<"Given sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}