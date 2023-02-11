#include<bits/stdc++.h>
using namespace std;
void sum_recursion(int i, int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    sum_recursion(i-1,sum+i);
}
int main(){
//print the sum of first N natural no.s with the help of recursion
int n;
cout<<"Enter the no.";
cin>>n;
sum_recursion(n,0);
    return 0;

}