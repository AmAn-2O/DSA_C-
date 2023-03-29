#include<bits/stdc++.h>
using namespace std;
  void tower_hanoi(int n,int n1,int n2,int n3){
    if(n==0){
        return;
    }
    tower_hanoi(n-1,n1,n3,n2);
     cout<<"move disk"<<n<<"from"<<n2<<endl;
     tower_hanoi(n-1,n1,n2,n3);
}

int main (){
int n=3;
tower_hanoi(n,1,2,3);
return 0;
}
