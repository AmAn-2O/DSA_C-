#include<bits/stdc++.h>
using namespace std;
bool check_str_palindrome(int i,string &s){
    if (i>=s.size()/2) return true ;
    if(s[i]!=s[s.size()-i-1])
    return false;
    return check_str_palindrome(i+1,s);
}
void rev_arr_app2(int l,int arr[], int r){
    if(l>=r/2) return ;
    swap(arr[l],arr[r-l-1]);
    rev_arr_app2(l+1,arr,r);
}
void rev_arr_app1(int l, int arr[],int r){
    if(l>=r) return ;
    swap(arr[l],arr[r]);
    rev_arr(l+1,arr,r-1);
}
int main(){
reverse of an array with the help of recursion
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
rev_arr_app1(0,arr,n-1);
rev_arr_app2(0,arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
string s;
s="MADAM";
cout<<check_str_palindrome(0,s);
    return 0;
}