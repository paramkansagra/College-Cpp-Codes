#include <bits/stdc++.h>

using namespace std;

template <class T,int n>
class mySequence{
    
    private:
        T memBlock[n];
    public:
        void setMember(int pos,T value){
            memBlock[pos] = value;
        }

        T getMember(int pos){
            return memBlock[pos];
        }
};

int main(){

    mySequence<int,5> haha;
    
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        haha.setMember(i,temp);
    }

    for(int i=0;i<5;i++){
        cout<<haha.getMember(i)<<" "<<endl;
    }

    return 0;
}