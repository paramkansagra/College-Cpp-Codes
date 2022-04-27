#include <iostream>

using namespace std;

class charge{
    private:
        int units;
        float bill;
    public:
        void set_units(){
            cin>>this->units;
        }

        void print_bill(int u){
            if(u<=100){
                cout<<"fixed charge -> 20 extra -> "<<this->bill-20<<" total -> "<<this->bill<<endl;
            }
            else if(u<=200){
                cout<<"fixed charge -> 20 extra -> "<<this->bill-20<<" total -> "<<this->bill<<endl;
            }
        }

        void print_bill(int u1,int u2){
            cout<<"fixed charge -> 30 extra -> "<<this->bill-30<<" total "<<this->bill<<endl;   
        }
        
        void print_bill(int u1,int u2,int u3){
            cout<<"fixed charge -> 40 extra -> "<<this->bill-40<<" total "<<this->bill<<endl;  
        }

        float get_bill(){
            return this->bill;
        }
        
        void calculate_bill(){
            if(this->units<=100){
                this->bill = this->units*1 + 20;
                print_bill(this->units);
            }
            else if(this->units <= 200){
                this->bill = this->units * 1.5 + 20;
                print_bill(this->units);
            }
            else if(this->units <= 500){
                this->bill = 200*2 + (this->units-200)*3 + 30;
                print_bill(200,this->units-200);
            }
            else{
                this->bill = 200*3 + 299*4 + (this->units - 500)*5.75 + 40;
                print_bill(200,300,this->units-500);
            }
        }
};

int main(){

    charge c1;

    c1.set_units();
    c1.calculate_bill();

    return 0;
}