#include<bits/stdc++.h>
using namespace std;
/*
//print names n times
void print_name(int n,int m){
    if(n>m)
    return ;
    cout<<"Aman"<<" ";
    print_name(n+1,m);
    
}
//print linerly 1 to N
void print_digit(int n,int m){
    if(n>m) return ;
    cout<<n<<" ";
    print_digit(n+1,m);
}

//print digit from N-->1
void print_revOdigit(int m, int n){
    if(m<n) return ;
    cout<<m<<" ";
    print_revOdigit(m-1,n);
    
}
//print from 1 to N without using (n+1,m) do(using backtracking)
void backtracking(int n,int m){
    if(n<1) return ;
    backtracking(n-1,m);
    cout<<n<<" ";
}*/

//print from N to 1 without using (m-1,n) do(using backtracking)
int main(){
    int n=5;
// print_name(1,n);
//print_digit(1,n);
// print_revOdigit(n,1);
//backtracking(n,n);
backtracking(n,n);

    return 0;
}