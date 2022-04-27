#include <iostream>

using namespace std;

int main(){

    string s;
    int check_sum;

    cin>>s>>check_sum;

    int n = 0;
    int total = 0;
    
    for(int i=s.length()-1;i>=0;i--){
        if(n%2 == 0){
            total += s[i]-'0';
        }
        n++;
    }

    if(total == check_sum){
        cout<<"Credit Card correct";
    }
    else{
        cout<<"Credit Card Incorrect";
    }

    return 0;
}