#include <iostream>

using namespace std;

template <class T>
void print(T data){
    cout<<data<<endl;
}

template <class T>
void print(T data,int n){
    for(int i=0;i<n;i++){
        cout<<data<<endl;
    }
}

int main(){

    print(10);
    print(12,2);
    print("hello");
    print("i am studying in vit",2);

    return 0;
}