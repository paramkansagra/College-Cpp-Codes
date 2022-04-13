#include <iostream>

using namespace std;

class addition{
    public:
        int sum(int a,int b){
            return a+b;
        }
        int sum(int a,int b,int c){
            return a+b+c;
        }
        float sum(double a,double b){
            return a+b;
        }
};

int main(){

    addition add;
    
    cout<<add.sum(10,20,30)<<endl;
    cout<<add.sum(11.2,23.4);

    return 0;
}