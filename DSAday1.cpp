#include<bits/stdc++.h>
using namespace std;
int main(){
   /* cout<<"Welcome to the DSA first lecture!";
    long long x;
    cin>>x;
    cout<<"the value of x is "<<x;*/
    
//string
/*string s1,s2;
cin>>s1>>s2;
cout<<s1<<" "<<s2;*/

//print the line until break
/*string str;
getline(cin,str);
cout<<str;*/

//Wap that takes an input of age and prints if u are adult or not
/*int age;
cin>>age;
if(age>=18){
    cout<<" U adult";}
    else{
        cout<<"U R not adult";
    }*/
//wap for the grading system with the help of if else statements
int x;
cout<<"Enter the marks:";
cin>>x;
if (x<25)
cout<<"grade F"; 
else if (x>=25 & x<=44)
cout<<"grade E";
else if (x>=45 & x<=49 )
cout<<"grade D"; 
else if (x>=50 & x<=59)
cout<<"grade C"; 
else if (x>=60 & x<=79)
cout<<"grade B"; 
else if (x>=80 & x<=100)
cout<<"grade A+"; 
else
cout<<"enter the valid marks:";





    return 0;
}