#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.:";
    cin>>n;
   
    //reverse a no. or find the sum of the no.
 /*    int sum=0;
    for(int i=1;i<=n;i++){
        int last_digit=n%10;
        n=n/10;
         cout<<last_digit<<" ";
         sum=sum+last_digit;
}
cout<<endl<<sum;

//count the no. of digits present in the no.
int count=0;
for(int i=1;i<=n;i++){
    int last_digit=n%10;
    count++;
    n=n/10;

}
cout<<endl<<count;

//Given a number N. Count the number of digits in N which evenly divides N.
//for n=12 and is 2 , and for 23 and is 0
int count=0;
int m=n;
while(m>0){
    int last_digit=m%10;
    m=m/10;
    if(last_digit>0&& n%last_digit==0)
    count++;
}
cout<<count;

//reverse a given no. 1234 and 4321
int reverse=0;
while(n>0){
    int last_digit=0;
    last_digit=n%10;
    n/=10;
    reverse=reverse*10+last_digit;
}
cout<<reverse;

//check whether a no. is palindrome or not
int reverse=0;
int m=n;
while(m>0){
    int last_digit=0;
    last_digit=m%10;
    m/=10;
    reverse=reverse*10+last_digit;
}
if(reverse==n) 
{cout<<"Palindrome";}
else
{ cout<<"!Palindrome";}*/

return 0;
    }

