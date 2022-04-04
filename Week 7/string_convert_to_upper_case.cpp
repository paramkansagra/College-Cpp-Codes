#include <iostream>

using namespace std;

string convert_to_upper(string s1){
    string temp = "";
    for(int i=0;i<s1.length();i++){
        temp += toupper(s1[i]);
    }

    return temp;
}

int main(){

    string s1;
    cin>>s1;

    s1 = convert_to_upper(s1);
    cout<<s1<<endl;

    return 0;
}