#include<bits/stdc++.h>
using namespace std;
/*void hello(){
    cout<<"Helooo!";
}
void Name(string name){
    cout<<"hey "<<name<<endl;
}
int sum(int a, int b){
   int  result=a+b;
    return result;
}
//pass by value where actual value is not change its copy value will change!
void notdoneyet(int n){
    cout<<n<<endl;
    n*=5;
    cout<<n<<endl;
    n*=7;
    cout<<n<<endl;
}

//pass by reference where actual value is change its when it's copy value will change!
void notdoneyet(int &n){
    cout<<n<<endl;
    n*=5;
    cout<<n<<endl;
    n*=7;
    cout<<n<<endl;}
*/
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
/*
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
cout<<"enter the valid marks:";*/
/*
//WAP with the help of age restriction that a person is eligible for the job or not!
int age;
cout<<"Enter the age:";
cin>>age;
if (age<18){
cout<<"not eligible for the job:";}
 else if (age<=57){
        cout<<"eligible for the job:";
 if (age>=55){
        cout<<",but retirement comming soon!";
    }
 }
else
cout<<"retirement";
*/

//WAP with the help of SwItcH StAtEmEnT

/*int day;
cout<<"Enter the day:";
cin>>day;
switch(day){
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
    break;
    case 3:
    cout<<"Wednesday";
    break;
    case 4:
    cout<<"Thursday";
    break;
    case 5:
    cout<<"Friday";
    break;
    case 6:
    cout<<"Saturday";
    break;
    case 7:
    cout<<"Sunday";
    break;
default:
cout<<"invalid input:";
}*/

/*int choice;
cout<<"Enter the choice:";
cin>>choice;
switch(choice){
    case 1:
    int radius;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<"Area of Circle:"<<3.14*radius*radius;
    break;
    case 2:
    int length,breadth;
    cout<<"Enter length & breadth:";
    cin>>length>>breadth;
    cout<<"Area of Rectangle:"<<length*breadth;
    break;
}*/

/*
string s;
cin>>s;
cout<<s[0]<<s[1];
int len=s.size();
cout<<len;
cout<<s[len-1];*/

/*hello();
string name;
cin>>name;
Name(name);
string name2;
cin>>name2;
Name(name2);

//wap take two numbers and print their sum with the help of the functions
int a,b;
cin>>a>>b;
cout<<sum(a,b);
   
//pass by value where actual value is not change its copy value will change!
 int n;
 cin>>n;
 notdoneyet(n);
 cout<<n; 

 //pass by reference actual value will change if there is change in the function!
 int n;
 cin>>n;
 notdoneyet(n);
 cout<<n;*/
 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++){
    cin>>arr[i];
 }
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
return 0;
}
