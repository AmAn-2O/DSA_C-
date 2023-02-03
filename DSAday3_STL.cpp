#include <bits/stdc++.h>
using namespace std;
/*void exp_Pair(){
    pair<int , int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int,int>>p1={1,{2,5}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int , int> arr[]={{1,2},{3,4},{6,9}};
    cout<<arr[2].first;
}
void exp_Vector(){
    vector<int> v;
    v.push_back(6);
    v.emplace_back(4);
    v.push_back(1);
    v.emplace_back(8);
    v.push_back(2);
    v.emplace_back(5);
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int,int>>v1;
    v1.push_back({2,5});
    v1.emplace_back(3,6);
    cout<<v1[0].first<<" "<<v1[0].second<<" "<<v1[1].first<<" "<<v1[1].second;
    cout<<endl;

    vector<int> v2(5,100);
    cout<<v2[0]<<" "<<v2[1]<<endl;

     vector<int> v3(5);
    cout<<v3[0]<<" "<<v3[1]<<endl;

     vector<int> v4(7,34);
    vector<int>::iterator it=v4.begin();
    it++;
    cout<<*(it)<<" ";
    it+=2;
    cout<<*(it)<<" ";
cout<<endl;
    vector<int> v5(6,65);
    for(auto it:v5){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it=v5.begin(); it!=v5.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
for(auto it:v){
    cout<<it<<" ";
}
v.erase(v.begin());
v.erase(v.begin()+1,v.begin()+4);
v.insert(v.begin(),34);
v.insert(v.begin()+1,3,10);
v.pop_back();
v.clear();
cout<<endl;
for(auto it:v){
    cout<<it<<" ";
}
cout<<endl;
cout<<v.size();
cout<<v.empty();

}
void exp_List(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(6);
    ls.push_front(8);
    ls.emplace_front(9);
    ls.emplace_front(3);
    for(auto it:ls){
        cout<<it<<" ";
    }
}
void exp_Dequeue(){
    deque<int>dq;
    dq.push_back(5);
    dq.emplace_back(6);
    dq.push_front(9);
    dq.push_back(7);
    cout<<dq[0]<<endl;
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;
cout<<dq.back()<<endl;
cout<<dq.front()<<endl;

}
void exp_Stack(){
    stack<int>st;
    st.push(5);
    st.push(7);
    st.push(3);
    st.push(9);
    st.emplace(8);
    cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   cout<<st.size()<<endl;
   cout<<st.empty()<<endl;

   stack<int> st1;
   st1.swap(st);
   cout<<st1.top();
}
void exp_Queue() {
  queue<int> q;
  q.push(5);
  q.push(6);
  q.push(2);
  q.emplace(9);
  q.back()+=9;
cout<<q.back()<<endl;
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
}
void exp_Priority_Queue(){
    priority_queue<int>pq;
    pq.push(9);
    pq.push(3);
    pq.push(6);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //minimum heap
    priority_queue<int, vector<int>,greater<int>> pq1;
    pq1.push(4);
    pq1.push(6);
    pq1.push(2);
    pq1.push(9);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;
}
void exp_Set(){
    set<int> st;
    st.insert(5);
    st.insert(3);
    st.insert(7);
    st.emplace(2);
    auto it=st.find(3);
    st.erase(3);
for(auto it:st){
    cout<<it<<" ";
}

}
void exp_Multiset(){
    multiset<int> ms;
    ms.insert(2);
    ms.insert(5);
    ms.insert(2);
    ms.insert(5);
    ms.erase(2);
    ms.erase(ms.find(2),ms.find(2));
    for(auto it:ms){
        cout<<it<<" ";
    }
}
*/

int main() {
  // exp_Pair();
  // exp_Vector();
  // exp_List();
  // exp_Dequeue();
  // exp_Stack();
 // exp_Queue();
 //exp_Priority_Queue();
 //exp_Set();
 //exp_Multiset();
 int arr[6]={3,2,7,1,6,8};
 int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
    //  int arr[6]={3,2,7,1,6,8};
//  int n=sizeof(arr)/sizeof(arr[0]);
//  sort(arr,arr+n);
//  for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//  }

// int n;
// cout<<"Enter the no.:";
// cin>>n;
//  int arr[n];
//  for (int i=1;i<=n;i++){
//     cin>>arr[i];
//  }
// for (int i=1;i<=n;i++){
//     cout<<arr[i]<<" ";
// }
// for (int i=1;i<=n;i++){
//     if (arr[1]<arr[i]){
//         arr[1]=arr[i];
//     }
// }
// cout<<"Largest No. :"<<arr[1];
    
//prime no. print logic
int n;
cout<<"Enter the no.:";
cin>>n;
int count=0;
    for(int i=1;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0&& i!=1){
            cout<<i<<" ";
        }
        count=0;
    }


 exp_Priority_Queue();
  return 0;
}
