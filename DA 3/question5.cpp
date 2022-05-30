#include <iostream>
 
using namespace std;
 
class boardingPass{
    private:
        int x,age,number,date,fare;
        string name,address;

        string pass;
    
    public:
        boardingPass(){
            cin>>name>>age>>address>>number>>date>>fare>>x;
        }

        void generate(){
            pass = "MAS"+to_string(x++);
        }

        friend void discount(boardingPass);

        void print(){
            cout<<pass<<endl<<name<<endl<<age<<endl<<date<<endl<<fare<<endl;
        }
}; 

void discount(boardingPass b1){
    if(b1.age>=12 && b1.age<=58){
        b1.fare = b1.fare*0.8;
    }
    else if(b1.age>58){
        b1.fare = b1.fare*0.6;
    }
    else if(b1.age<12){
        b1.fare = b1.fare*0.5;
    }
}

int main(){

    boardingPass b1;
    b1.generate();
    discount(b1);
    b1.print();

    return 0;
}