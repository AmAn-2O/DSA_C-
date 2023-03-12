#include<bits/stdc++.h>
using namespace std;
void rotate_array_oneplace(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
        arr[n]=temp;
        cout<<arr[i]<<" ";
    }
}
void rotate_array_dplace(int arr[],int n, int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
         }
    for(int i=d;i<n;i++){
        arr[d-i]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        //arr[i]=temp[i-(n-d)];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter The Elements Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//WAP TO LEFT ROTATE THE ARRAY BY ONE PLACE   
    cout<<"Rotated Array:";
    rotate_array_oneplace(arr,n);

//WAP TO LEFT ROTATE THE ARRAY BY D PLACE{Brute Force}
int d;
cout<<"Rotate The Array By D Place:";
cin>>d;
rotate_array_dplace(arr,n,d);

    return 0;
}