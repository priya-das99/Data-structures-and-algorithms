#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={2,5,8,9,12,1};
int target=15;
int n=sizeof(arr)/sizeof(arr[0]);
vector<pair<int,int>>k;
for(int i=0;i<n-1;i++){
    pair<int,int>p;
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            p.first=i;
            p.second=j;
            k.push_back(p);
            
    
    }
        
    }
}
if(k.empty()){
    cout<<"No such indices exist in the array."<<endl;
}
else{
cout<<"The pairs of indices are:"<<endl;
for(auto i:k){
    cout<<i.first<<","<<i.second<<endl;
     }
}
}