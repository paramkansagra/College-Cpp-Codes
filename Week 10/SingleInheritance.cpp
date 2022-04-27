#include <iostream>
 
using namespace std;
 
class Student{
    private:
        int rollNumber;
        string name;
    
    public:
        void setData(){
            cout<<"input roll number ";
            cin>>this->rollNumber;
            cout<<"enter name ";
            cin>>this->name;
        }

        int getRoll(){
            return this->rollNumber;
        }

        string getName(){
            return this->name;
        }
};

// base class -> student
// child class -> marks // this is single inheritance

class Marks: public Student{
    private:
        int m1,m2,m3,total;
        float average;
    
    public:
        void setMarks(){
            cout<<"input marks m1 m2 m3 ";
            cin>>this->m1>>this->m2>>this->m3;

            this->total = this->m1 + this->m2 + this->m3;
        }

        void setAverage(){
            this->average = this->total/3;
        }

        int getM1(){
            return this->m1;
        }

        int getM2(){
            return this->m2;
        }

        int getM3(){
            return this->m3;
        }

        float getAverage(){
            return this->average;
        }
};

int main(){

    Marks s1;
    s1.setData();
    s1.setMarks();
    s1.setAverage();

    cout<<s1.getRoll()<<" "<<s1.getName()<<" "<<s1.getAverage()<<endl;

    return 0;
}