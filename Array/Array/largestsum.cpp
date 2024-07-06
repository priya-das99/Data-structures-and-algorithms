#include<iostream>
// #include<pair>
using namespace std;

pair<int, int> subarrayIdx(int arr[], int n){
    pair<int,int>p;
    int largest_sum=0;
    for (int i=0;i<=n-1;i++){
        int sum=0;
        for(int j=i;j<=n-1;j++){
            sum+=arr[j];
            if(sum>largest_sum){
                largest_sum=sum;
                p.first=i;
                p.second=j;
            }
        }
    }
    return p;

}

int main(){
    // int arr[] =  {-2,-3,4,-1,-2,1,5,-3};
    // int n = sizeof(arr)/sizeof(arr[0]);
      int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int, int> p = subarrayIdx(arr, n);

    cout<<"The subarray is :"<<endl;
    for(int i=p.first;i<=p.second;i++){
        cout<<arr[i]<<" ";
    }
}