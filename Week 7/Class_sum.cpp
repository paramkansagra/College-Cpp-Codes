#include <iostream>

using namespace std;

class sum{
    private:
        int a,b;
    
    public:
        void setA(int x){
            a = x;
        }
        void setB(int x){
            b = x;
        }

        int getSum(){
            return a+b;
        }
};

int main(){

    sum s;
    s.setA(5);
    s.setB(10);

    cout<<s.getSum()<<endl;

    return 0;
}