#include <bits/stdc++.h>

using namespace std;

class counter{
    private:
        int c1;
    
    public: 
        counter(){
            cin>>this->c1;
        }
        
        counter(int c){
            this->c1 = c;
        }

        int getCount(){
            return this->c1;
        }

        counter operator ++(){
            this->c1++;
            counter temp(this->c1);

            return temp;
        }

        void operator +(counter c){
           this->c1 = c.getCount() + this->c1; 
        }
};

int main(){

    counter c1,c2;

    ++c1;
    cout<<c1.getCount()<<endl;

    ++c2;
    cout<<c2.getCount()<<endl;

    c1+c2;
    cout<<c1.getCount()<<endl;

    return 0;
}