#include<bits/stdc++.h>

int find_missingNo_Optimal1(int n, int  arr1[]){
    int sum=n*(n+1)/2;
    int s1=0;
    for(int i=0;i<n-1;i++){
        s1=s1+arr1[i];
    }
     return sum-s1;

}
int find_missingNo_Optimal2(int n, int arr1[]){
    int xor1=0;
     int xor2=0;
    for(int i=0;i<n;i++){
        xor1=xor1^i;
    }
    for(int i=1;i<n;i++){
        xor2=xor2^arr1[i];
    }
     return xor1 ^xor2;

}


int find_missingNo_better (int n,int arr1[]){
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr1[i]]=1;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            return i;
        }
    }
}
int find_missingNo_bruteforce(int n, int arr1[]){
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr1[j]==i){
                flag++;
              break;

            }
        }
        if(flag==0) return i;
    }
}
using namespace std;
int main(){
    int arr[6];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter The Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[ i];
    }
    cout<<find_missingNo_bruteforce(n,arr)<<endl;
     cout<<find_missingNo_better(n,arr)<<endl;
     cout<<find_missingNo_Optimal1(n,arr)<<endl;
     cout<<find_missingNo_Optimal2(n,arr)<<endl;
    return 0;
}
