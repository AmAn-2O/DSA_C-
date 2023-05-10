#include<bits/stdc++.h>
using namespace std;
int linear_Search(int arr[],int  n,int number){
    for(int i=0;i<n;i++){
        if(arr[i]==number)return i+1;
    }
    return -1;
}
vector<int> find_Un(int arr1[], int arr2[], int n1,int n2){
    set<int> st;
    for(int i=0;i<n1;vi++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
      st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(auto it:temp){
        cout<<it<<" "<<endl;
    }
}
vector<int> find_Un_optimal(int arr1[], int arr2[], int n1,int n2){
    vector<int> unionarr;
    int i=0;
    int j=0;
while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
        if(unionarr.size()==0||unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;
    }
    else{
        if(unionarr.size()==0||unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
        }
        j++;

    }
}
while(i<n1){
      if(unionarr.size()==0||unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
        }
        i++;  
}

    while(j<n2){
        if(unionarr.size()==0||unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
        }
        j++;
    }

    for(auto it:unionarr){
        cout<<it<<" "<<endl;
    }
}
void find_In(int arr1[], int arr2[], int n1,int n2){
    set<int> st;
    for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j]){
        st.insert(arr1[i]);
      }
    }}
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(auto it:temp){
        cout<<it<<" "<<endl;
    }
}
void find_In_opt(int arr1[], int arr2[], int n1,int n2){
    set<int> st;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]==arr2[j]){
            st.insert(arr1[i]);
        }
        else if(arr1[i]>arr2[j]) j++;
        else i++;
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(auto it:temp){
        cout<<it<<" "<<endl;
    }
}
/*void rightrotate_array_oneplace(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
     arr[0]=temp;
}
void rightrotate_array_dplace(int arr[],int n, int k){
    for(int i=0;i<k;i++){
        rightrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void leftrotate_array_oneplace(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotate_array_dplace(int arr[],int n, int d){
    for(int i=0;i<d;i++){
        leftrotate_array_oneplace(int arr[],int n)
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void leftrotate_array_dplace(int arr[],int n, int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
         }
    for(int i=d;i<n;i++){
        arr[d-i]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        //arr[i]=temp[i-(n-d)];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}*/
/*
//rotate the array with recursive approach
void leftrotate_array_oneplace(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotate_array_dplace(int arr[],int n, int d){
    for(int i=0;i<d;i++){
        leftrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void rightrotate_array_oneplace(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
     arr[0]=temp;
}
void rightrotate_array_dplace(int arr[],int n, int k){
    for(int i=0;i<k;i++){
        rightrotate_array_oneplace(arr,n);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/
//Brute Force
vector<int> sort_zeros_toend(int n, int arr[]){
    vector<int>temp;
    int n1=sizeof(temp)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}
void sort_zeros_toend_optimal(int n, int arr[]){
   int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[6];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter The Elements Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//WAP TO RIGHT ROTATE THE ARRAY BY ONE PLACE  
// cout<<"Rotated Array:";
// rightrotate_array_oneplace(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//WAP TO LEFT ROTATE THE ARRAY BY ONE PLACE   
//     cout<<"Rotated Array:";
//     leftrotate_array_oneplace(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//WAP TO LEFT ROTATE THE ARRAY BY D PLACE{Brute Force}
// int d;
// cout<<"Rotate The Array By D Place:";
// cin>>d;
// leftrotate_array_dplace(arr,n,d);

//WAP TO RIGHT ROTATE THE ARRAY BY D PLACE{Brute Force}
// int k;
// cout<<"Rotate The Array By K Place:";
// cin>>k;
// rightrotate_array_dplace(arr,n,k);

//WAP TO MOVE ALL ZEROS TO LEFT by brute Force Approach
//sort_zeros_toend(n, arr);

//WAP TO MOVE ALL ZEROS TO LEFT by optimal Approach
//sort_zeros_toend_optimal(n, arr);

//WAP TO implement LinearSearch
//cout<<linear_Search(arr,n,5);

//WAP to implement Union of 2 arrays(Brute Force approach)
// int arr1[5]={1,2,3,3,4};
// int arr2[5]={1,2,4,5,5};
// find_Un(arr1,arr2,5, 5);
//WAP to implement Union of 2 arrays(Optimal approach)
// find_Un_optimal(arr1,arr2,5, 5);

//WAP to implement Intersection of 2 arrays(Brute Force approach)
// int arr1[8]={2,5,3,7};
// int arr2[7]={5,2,9,0,1};
// find_In(arr1,arr2,4,5);

//WAP to implement Intersection of 2 arrays(optimal approach)
int arr1[8]={2,5,3,7};
int arr2[7]={5,2,9,0,1};
find_In_opt(arr1,arr2,4,5);

    return 0;
}
