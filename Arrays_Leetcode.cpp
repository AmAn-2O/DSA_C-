#include<bits/stdc++.h>
using namespace std;
int main(){
//SWAP ALTERNATE ELEMENTS OF AN ARRAY
int n;
cout<<"Enter the N:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

//FIND UNIQUE ELEMENT OF AN ARRAY
int ans=0;
for(int i=0;i<n;i++){

    ans=ans^arr[i];

}
cout<<ans;

//FIND THE UNIQUE NO. OF OCCURENCES


    return 0;
}