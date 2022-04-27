#include <iostream>

using namespace std;

class Family{
    public:
        bool first_graduates;
        void setFirstGraduates(){
            cin>>this->first_graduates;
        }
};

class Math{
    public:
        int marks;
        void setMarks(){
            cin>>this->marks;
        }
};

class Physics{
    public:
        int marks;
        void setMarks(){
            cin>>this->marks;
        }
};

class Chemistry{
    public:
        int marks;
        void setMarks(){
            cin>>this->marks;
        }
};

class Student: public Physics,public Math, public Chemistry,public Family{

};

int main(){

    Student s1;
    s1.Family::setFirstGraduates();
    s1.Math::setMarks();
    s1.Chemistry::setMarks();
    s1.Physics::setMarks();

    if(s1.Family::first_graduates == true && s1.Math::marks>90 && s1.Chemistry::marks>90 && s1.Physics::marks>90){
        cout<<"Eligible for Scholarship";
    }
    else{
        cout<<"Not eligible for Scholarship";
    }

    return 0;
}