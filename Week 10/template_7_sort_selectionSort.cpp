#include <bits/stdc++.h>

using namespace std;

template <class T>
void sort(T *arr,int n){
    for(int i=0;i<n;i++){
        int ele = arr[i];
        int pos = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<ele){
                ele = arr[j];
                pos = j;
            }
        }
        swap(arr[i],arr[pos]);
    }
}

template <class T>
void print(T *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,n);
    print(arr,n);
    
    return 0;
}