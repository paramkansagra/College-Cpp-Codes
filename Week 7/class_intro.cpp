#include <iostream>

using namespace std;

class sum
{   
    private:
        int a,b;
        int sum1 = 0;
    public:
        void get_data(){
            cin>>a>>b;
        }
        void calculate(){
            sum1 = a + b;
        }
        void print(){
            cout<<sum1<<endl;
        }

};

int main(){

    sum sumobj;
    sumobj.get_data();
    sumobj.calculate();
    sumobj.print();

    return 0;
}