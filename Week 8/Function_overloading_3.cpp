#include<iostream>

using namespace std;

void swap( float &fa, float &fb){
    float t;
    t = fa;
    fa=fb;
    fb=t;
    cout <<"\n"<< "The exchaged X value is "<<fa<<endl;
    cout <<"\n"<< "The exchanged Y value is "<<fb<<endl;
}

void swap( int &ia, int &ib){
    int t;
    t = ia;
    ia=ib;
    ib=t;
    cout<<"\n The exchanged C value is "<<ia<<endl;
    cout<<"\n The exchanged D value is "<<ib<<endl;
}

int main(){
    float x=20, y=30;
    swap (x,y);
    int c=100,d=200;
    swap(c,d);
    return 0;
}