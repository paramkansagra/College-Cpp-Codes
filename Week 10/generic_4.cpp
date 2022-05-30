#include <bits/stdc++.h>

using namespace std;

template <class T>
class haha{
    private:
        T s;
    public:
        haha(T s1){
            s = s1;
        }

        void show(){
            cout<<s<<endl;
        }
};

template <>
class haha <string>{
    private:
        string s;
    public:
        haha(string s1){
            s = s1;
        }

        void show(){
            cout<<"lol "<<s<<endl;
        }
};

int main(){

    haha<string> h1("param");
    haha<int> h2(69);

    h1.show();
    h2.show();

    return 0;
}