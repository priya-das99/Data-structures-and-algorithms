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
int main(){
int arr[]={2,4,3,3,1,6};
int n=sizeof(arr)/sizeof(arr[0]);
int dup_num;
bool missing_valuefound=false;
sort(arr,n);
for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        dup_num = arr[i+1];
        cout<<"Duplicate  number is:"<<dup_num<<endl;

    }
    if(arr[i+1]!=arr[i]+1 && arr[i] != dup_num){
        cout<<"The missing no is:"<<arr[i]+1<<endl;
        missing_valuefound=true;
    }
    
}
if(missing_valuefound!=true){
    cout<<"The missing number is:"<<n<<endl;
}
}



