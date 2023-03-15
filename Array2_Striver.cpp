#include<bits/stdc++.h>
using namespace std;
/*void rightrotate_array_oneplace(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
     arr[0]=temp;
}
void rightrotate_array_dplace(int arr[],int n, int k){
    for(int i=0;i<k;i++){
        rightrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void leftrotate_array_oneplace(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotate_array_dplace(int arr[],int n, int d){
    for(int i=0;i<d;i++){
        leftrotate_array_oneplace(int arr[],int n)
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void leftrotate_array_dplace(int arr[],int n, int d){
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
}*/
/*
//rotate the array with recursive approach
void leftrotate_array_oneplace(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotate_array_dplace(int arr[],int n, int d){
    for(int i=0;i<d;i++){
        leftrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}*/
void rightrotate_array_oneplace(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
     arr[0]=temp;
}
void rightrotate_array_dplace(int arr[],int n, int k){
    for(int i=0;i<k;i++){
        rightrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter The Elements Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//WAP TO RIGHT ROTATE THE ARRAY BY ONE PLACE  
// cout<<"Rotated Array:";
// rightrotate_array_oneplace(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//WAP TO LEFT ROTATE THE ARRAY BY ONE PLACE   
//     cout<<"Rotated Array:";
//     leftrotate_array_oneplace(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//WAP TO LEFT ROTATE THE ARRAY BY D PLACE{Brute Force}
// int d;
// cout<<"Rotate The Array By D Place:";
// cin>>d;
// leftrotate_array_dplace(arr,n,d);

//WAP TO RIGHT ROTATE THE ARRAY BY D PLACE{Brute Force}
int k;
cout<<"Rotate The Array By K Place:";
cin>>k;
rightrotate_array_dplace(arr,n,k);

    return 0;
}
