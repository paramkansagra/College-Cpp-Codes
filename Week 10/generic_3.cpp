#include <bits/stdc++.h>

using namespace std;

template <class T1,class T2>
class Test{
    private:    
        T1 a;
        T2 b;
    public:
        Test(T1 x,T2 y){
            a = x;
            b = y;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};

int main(){

    Test<string,string> t1("param","kansagra");
    Test<int,int> t2(69,420);
    Test<float,float> t3(69.420,6969.69);
    Test<string,int> t4("haha lol",69);

    t1.show();
    t2.show();
    t3.show();
    t4.show();

    return 0;
}