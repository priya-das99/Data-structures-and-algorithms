#include<iostream>
using namespace std;
int max_profit(int arr[],int n)
{
   int max_profit=0;
   for(int i=0;i<n-1;i++)
   { 
    for(int j=i+1;j<n;j++){
        int current_profit=arr[j]-arr[i];
        if(current_profit>max_profit)
        {
            max_profit=current_profit;
        }
    }
   }
   return max_profit;
}
int main(){
    int arr[]={10,20,30,15,12,9,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int P = max_profit(arr,n);
    cout<<"Max Profit is:"<<P<<endl;
}