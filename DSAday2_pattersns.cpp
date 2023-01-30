#include<bits/stdc++.h>
using namespace std;
/*void pattern1(int n){
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
}}

void pattern2(int n){
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
  for (int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
}}  

void pattern3(int n){
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
  for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
}}  

void pattern4(int n){
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
  for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
}}  
void pattern5(int n){
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
  for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
}}  
void pattern6(int n){
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
  for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
}}  

void pattern7(int n){
//     *    
//    ***   
//   *****  
//  ******* 
// *********
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern8(int n){
// *********
//  ******* 
//   *****
//    ***
//     *
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout<<"*";
        
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern9(int n){
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
    for(int i=1;i<=2*n-1;i++){
       int star=i;
        if(i>n) star=2*n-i; 
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern10(int n){
// 1
// 01
// 101
// 0101
// 10101
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0) start=1;
        else start=0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
cout<<endl;
    }
 }
 void pattern11(int n){
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
    int space=2*(n-1);
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
    space-=2;
}
}
void pattern12(int n){
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
    int start=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=1+start;

        }
        cout<<endl;
    }
}
void pattern13(int n){
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }}
void pattern14(int n){
// ABCDE
// ABCD
// ABC
// AB
// A
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=((2*i)-1)/2;
        for(int j=1;j<=(2*i)-1;j++){
            cout<<ch;
        if(j<=breakpoint) ch++;
        else ch--;
        }
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
cout<<endl;
    }
}
void pattern17(int n){
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 
    for(int i=1;i<=n;i++){
        for(char ch='E'-i+1;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
 }
 void pattern18(int n){
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*i-2;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

 }
 void pattern19(int n){
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
     int start=i;
     if(i>n) start=2*n-i;
     for(int j=1;j<=start;j++){
        cout<<"*";
     }
     for(int j=1;j<=space;j++){
        cout<<" ";
     }
     for(int j=1;j<=start;j++){
        cout<<"*";
     }
    if(i<n) space-=2;
    else space+=2;
     cout<<endl;
    }
 }
 void pattern20(int n){
// *****
// *   *
// *   *
// *   *
// *****
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n) cout<<"*";
            else cout<<" ";    
        }
        cout<<endl;
    }
 }
 void pattern21(int n){
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i,left=j,right=2*n-2-i,bottom=2*n-2-j;
            cout<<(n-min(min(top,bottom),min(left,right)));

        }
        cout<<endl;
    }
 }
*/
int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;

// pattern1(n);
// pattern2(n);
// pattern3(n);
// pattern4(n);
//pattern5(n);
//pattern6(n);
// pattern7(n);
// pattern8(n); 
// pattern9(n); 
// pattern10(n);
//pattern11(n);
//pattern12(n);
//pattern13(n);
//pattern14(n);
//pattern15(n);
//pattern16(n);
//pattern17(n);
//pattern18(n);
//pattern19(n);
//pattern20(n);
//pattern21(n);

    return 0;
}
