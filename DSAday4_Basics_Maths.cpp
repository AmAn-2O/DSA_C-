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
{ cout<<"!Palindrome";}

//check whether a no. is Armstrong or !
// 371 =3^3+7^3+1^3=371 than the no. is armstrong no.
int m=n;
int sum=0;
while(m>0){
    int ld=m%10;
    m/=10;
    sum=sum+(ld*ld*ld);
}
if (n==sum) cout<<"Armstrong No.";
else cout<<"!Armstrong No.";

//find all the divisors 
// 12 divisors are 1,2,3,4,6,12
for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<" ";
    }
}

vector<int> ls;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        ls.push_back(i);
    
    if((n/i)!=i){
        ls.push_back(n/i);}
    
    }
}
sort(ls.begin(),ls.end());
for(auto it:ls){
    cout<<it<<" ";
}

//check whether a no. is prime or not
int count=0;
for(int i=2;i<n;i++){
    if(n%i==0){
        count++;
    }
}
if(count==0) cout<<"Prime";
else cout<<"!Prime";

//print the all the prime no. b\w the given range
for(int i=1;i<=n;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==0&& i!=0) {
    cout<<i<<" ";}
    count=0;
}

//find GCD/HCf of a no.
int m,m1;
cout<<"Enter the no.";
cin>>m>>m1;
int gcd=1;
for(int i=1;i<=min(m,m1);i++){
    if(m%i==0&& m1%i==0){
        gcd=i;
    }
}
cout<<gcd;

//more efficient way to find gcd/hcf of a no. by inversing the loop
int m,m1;
cout<<"Enter the no.";
cin>>m>>m1;
int gcd=1;
for(int i=min(m,m1);i>1;i--){
    if(m%i==0&& m1%i==0){
        gcd=i;
    }
}
cout<<gcd;

//best way to find the gcd is Euclidean Algorithm 
//gcd(a,b)==gcd(a-b,b) whether a>b
int a,b;
cout<<"Enter the no.";
cin>>a>>b;
while(a>0 && b>0){
    if(a>b){
        a=a%b;}
        else{
        b=b%a;}
}
if(a==0)
{ cout<<b;}
else
{ cout<<a;}*/

return 0;
    }

