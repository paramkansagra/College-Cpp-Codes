#include <iostream>
 
using namespace std;
 
class Student{

    private:
        int rollNumber;
    
    public:
        void setRollNumber(){
            cout<<"input roll number ";
            cin>>this->rollNumber;
        }

        int getRollNumber(){
            return this->rollNumber;
        }
};

class Marks: public Student{

    private:
        int sub1,sub2;
    
    public:
        void setMarks(){
            cout<<"input marks of sub1 and sub2 ";
            cin>>this->sub1>>this->sub2;
        }

        int getMark1(){
            return this->sub1;
        }

        int getMark2(){
            return this->sub2;
        }
};

class Result: public Marks{
    
    private:
        float total;
    
    public:
        void display(){
            this->total = this->getMark1() + this->getMark2();
            cout<<"total marks "<<this->total<<endl;
        }
};

int main(){

    Result student1;
    student1.setRollNumber();
    student1.setMarks();    

    student1.display();

    return 0;
}