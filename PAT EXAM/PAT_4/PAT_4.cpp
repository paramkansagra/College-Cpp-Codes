#include <iostream>
#include <stdlib.h>

using namespace std;

class algo{
    
    public:
        int n;
        int* arr = NULL;
        int total=0;
    
    public:
        algo(){
            cin>>this->n;
            arr = new int[n];
        }
        
        void takeInput(){
            for(int i=0;i<this->n;i++){
                cin>>this->arr[i];
            }
        }
        
        void printArr(){
            for(int i=0;i<this->n;i++){
                cout<<this->arr[i]<<" ";
            }cout<<endl;
        }
        
        void func(){
            int start = 0;
            int end = n-1;
            while(start<=end){
                int sum = arr[start]+arr[end];
                int max = 0;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        if(arr[i]+arr[j] == sum && i!=j){
                            max+=2;
                        }
                    }
                }
                
                if(max>total){
                    total=max;
                }
                
                end--;
            }
        }
        
        void sort(){
            for(int i=0;i<this->n;i++){
                for(int j=0;j<n-1;j++){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
        }
        
        void print(){
            cout<<total;
        }
    
};

int main(){
    
    algo a1;
    a1.takeInput();
    a1.sort();
    a1.func();
    cout<<a1.total;
    
    return 0;
}