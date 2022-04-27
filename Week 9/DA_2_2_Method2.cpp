#include <iostream>

using namespace std;

class CreditCard{
    private:
        string credit;
        int length,check_sum;

    public:
        void setCreditCard(){
            cin>>this->credit;
        }
        void setCheckSum(){
            cin>>this->check_sum;
        }
        void setLength(){
            this->length = this->credit.length();
        }

        friend bool check(CreditCard);
};

bool check(CreditCard c1){
    int n = 0;
    int total = 0;
    for(int i=c1.length-1;i>=0;i--){
        if(n%2 == 0){
            total += c1.credit[i] - '0';
        }
        n++;
    }
    
    if(total == c1.check_sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    CreditCard c1;
    c1.setCreditCard();
    c1.setCheckSum();
    c1.setLength();

    if(check(c1)){
        cout<<"Credit card is correct";
    }
    else{
        cout<<"Credit card is incorrect";
    }

    return 0;
}