#include <bits/stdc++.h>

using namespace std;

class square{
    private:
        int n;
    
    public:
        square(){
            cin>>n;
        }

        int getSide(){
            return n;
        }

        void getPerimeter(){
            cout<<n*4<<endl;
        }

        void getArea(){
            cout<<n*n<<endl;
        }

        void operator +(square& s1){
            this->n = s1.getSide() + this->n;
        }
};

int main(){

    square s1,s2;

    s1+s2;
    cout<<s1.getSide()<<endl;

    return 0;
}