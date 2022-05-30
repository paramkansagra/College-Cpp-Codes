#include <bits/stdc++.h>

using namespace std;

struct student{
    string name;
    string code;
    int age;
};

template <class T>
void disp(T &data){
    cout<<data<<endl;
}

ostream &operator << (ostream &o,student& s){ // we want to print the struct student as a cout so we are overloading this operator
    o<<"name => "<<s.name<<endl;
    o<<"age => "<<s.age<<endl;
    o<<"code => "<<s.code<<endl;

    return o;
}

istream &operator >> (istream &i,student &s){ // just adding the istream function to input the data using the cin
    cout<<"input name ";
    i>>s.name;
    cout<<"input age ";
    i>>s.age;
    cout<<"input code ";
    i>>s.code;

    return i;
}

int main(){
    
    struct student s1;
    cin>>s1;

    disp(s1.name);
    disp(s1.code);
    disp(s1.age);

    cout<<s1; // overloaded operator as we want to print the object of the structure
    
    return 0;
}