#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[arr.size()-1]<<endl;
}

int main(){
    
    int n,x,y;
    cin>>n>>x>>y;
    
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(i+1);
    }
    
    print(arr);
    
    reverse(arr.begin(),arr.end());
    print(arr);
    
    arr.insert(arr.begin()+1,x);
    print(arr);
    
    arr.push_back(y);
    arr.push_back(y);
    print(arr);

    return 0;
}