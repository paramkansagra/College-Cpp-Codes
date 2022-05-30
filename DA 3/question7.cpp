#include <iostream>
 
using namespace std;
 
class ResturantMeal{
    public:
        string name;
        int price;

        ResturantMeal(){
            cout<<"default constructor"<<endl;
        }
    
        ResturantMeal(string name,int price){
            this->name = name;
            this->price = price;
        }

        void print(){
            cout<<name<<" "<<price<<endl;
        }
};

class HotelService{
    public:
        string nameOfService;
        int serviceFee,roomNumber;

        HotelService(){
            cout<<"Default constructor"<<endl;
        }
    
        HotelService(string nameOfService,int serviceFee,int roomNumber){
            this->nameOfService = nameOfService;
            this->serviceFee = serviceFee;
            this->roomNumber = roomNumber;
        }

        void print(){
            cout<<nameOfService<<" "<<serviceFee<<" "<<roomNumber<<endl;
        }
};

class RoomServiceMeal:public ResturantMeal,public HotelService{
    public:
        RoomServiceMeal(){
            nameOfService = "room service";
            serviceFee = 4;
        }

        void print(){
            ResturantMeal::print();
            HotelService::print();
        }
};

int main(){

    RoomServiceMeal r1;
    r1.name = "Steak dinner";
    r1.price = 200;

    r1.print();

    return 0;
}