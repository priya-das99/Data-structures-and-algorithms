#include<iostream>
using namespace std;
void sort(int arr[], int n ){
    for(int i=0;i<n-1;i++){
         for (int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
         }
    }

}


int kthSmallest(int arr[], int n, int k){
    sort(arr,n);
    return arr[k-1];

}
int main(){
int arr[]={2,4,6,8,1};
int n = sizeof(arr)/sizeof(arr[0]);
int k;

cout<<"Enter the number:"<<endl;
cin>>k;
int k_ele = kthSmallest(arr, n,k );
cout<< "kth smallest element:"<< k_ele <<endl;



}
