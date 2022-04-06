#include <iostream>

using namespace std;

int sum(int a=0,int b=0,int c = 0){
    int z = a + b + c;
    return z;
}

int main(){

    cout<<sum()<<endl; // all default arguments taken
    cout<<sum(1)<<endl; // a and b are taken as default values and c = 1;
    cout<<sum(1,2)<<endl; // a is taken as default values and b = 1 and c = 2;
    cout<<sum(1,2,3)<<endl; // a = 1, b = 2, c = 3;

}