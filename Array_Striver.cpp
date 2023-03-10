#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);

    cout<<"Enter The Elements Of Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//Finding the largest number in the list {Brute Force}

// sort(arr,arr+n);
// cout<<"Largest No. is: "<<arr[n-1];

//Finding the largest number in the list {Optimal Solution}
// int large=arr[0];
// for(int i=0;i<n;i++){
//     if(arr[i]>large)  large=arr[i];
// }
// cout<<"Largest No. Is: "<<large;

//Finding the Second largest number in the list {Brute Force}
// sort(arr,arr+n);
// int largest=arr[n-1];
// int second=arr[0];
// for(int i=0;i<n;i++){
//     if(arr[i]!=largest)  second=arr[i];
// }
// cout<<"Second Largest No. Is:"<<second;

//Finding the Second largest number in the list {Better solution}
int large=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>large)  large=arr[i];
}
int second_large=-1;
for(int i=0;i<n;i++){
    if(arr[i]>second_large && arr[i]!=large){
        second_large=arr[i];
    }   
}
cout<<"Second  Largest No. is: "<<second_large;
    return 0;
}