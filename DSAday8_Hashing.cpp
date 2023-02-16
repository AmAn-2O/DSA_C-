#include<bits/stdc++.h>
using namespace std;
int count1(int arr[],int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            count++;
        }
    }
     return count;
}
int main(){
    int n;
    cin>>n;
int arr[n];
int count=0;
for(int i=0;i<n;i++){
cin>>arr[i];
}
int m;
cin>>m;
cout<<count1(arr,n,m);

    return 0;
}