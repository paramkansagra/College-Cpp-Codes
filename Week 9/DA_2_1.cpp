#include <iostream>

using namespace std;

class code{
    private:
        int initial_number,second_number;
    public:
        code(){
            cout<<"Constructor Called"<<endl;
            initial_number = 0;
            second_number = 0;
            cout<<"Initial and second number set to 0"<<endl;
        }
        void get_initial_number(){
            cin>>initial_number;
        }
        void get_second_number(){
            second_number = 0;
            int temp = initial_number;
            while(temp != 0){
                second_number = second_number*10+temp%10;
                temp = temp/10;
            }
        }
        bool check_if_valid(){
            bool check = true;
            bool first = false;
            while(second_number != 0 && initial_number != 0){
                if(first == false){
                    if(second_number%10 != initial_number%10){
                        check = false;
                        break;
                    }
                    first = true;
                }
                int temp1 = second_number%10;
                int temp2 = initial_number%10;
                second_number = second_number/10;
                initial_number = initial_number/10;

                if(second_number == 0 && initial_number == 0){
                    if(temp1 != temp2){
                        check = false;
                        break;
                    }
                }
            }
            return check;
        }
};

int main(){

    code c1;
    
    int temp;

    c1.get_initial_number();
    c1.get_second_number();

    if(c1.check_if_valid()){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }

    return 0;
}