#include <iostream>
 
using namespace std;
 
class Student{
    
    private:
        int rollNumber;
        int mark1,mark2;
    
    public:
        void setData(){
            cout<<"input roll number ";
            cin>>this->rollNumber;
            cout<<"input mark1 and mark 2";
            cin>>this->mark1>>this->mark2;
        }

        int getRoll(){
            return this->rollNumber;
        }
        int getMark1(){
            return this->mark1;
        }
        int getMark2(){
            return this->mark2;
        }
};

class Sports{
    
    private:
        int sportsMarks;

    public:
        void setSportsMakrs(){
            cout<<"input sports marks ";
            cin>>this->sportsMarks;
        }

        int getSportsMarks(){
            return this->sportsMarks;
        }
};

class Statement:public Student,public Sports{

    private:
        int total;
        float average;

    public:
        void display(){
            this->total = this->getMark1() + this->getMark2() + this->getSportsMarks();
            this->average = this->total/3;

            cout<<"Roll number "<<this->getRoll()<<" total "<<this->total<<" average "<<this->average<<" sports marks "<<this->getSportsMarks()<<endl;
        }
};

int main(){

    

    return 0;
}