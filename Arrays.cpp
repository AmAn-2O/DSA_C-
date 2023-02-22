#include<bits/stdc++.h>
using namespace std;
int main(){
    //first way to wap to intialises with array with any no.
    int n;
    cout<<"Enter the value:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}