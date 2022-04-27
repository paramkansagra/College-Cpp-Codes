// A14-Q2
// Description

// Write a C++ program(using inheritance) that needs to calculate the total marks of each student of a class in Physics, Chemistry and Mathematics. The number of students in the class is entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in the individual subjects of each student. The roll number and name of each student will be generated automatically. Also, find the average marks(in float, restrict with 2 decimal precision) of each student of a class.

// Boundary Condition

// n>0

// 0<= Marks >= 100

// Input Format

// First-line contains the total no. of students n’ of the class

// The next line contains the rollno of  student-1

// The next line contains the name of  student-1

// The next line contains the marks of physics (out of 100) of  student-1

// The next line contains the marks of chemistry (out of 100) of  student-1

// The next line contains the marks of mathematics (out of 100) of  student-1

// The next line contains the rollno of  student-2

// The next line contains the name of  student-2

// ….

// …

// The next line contains the rollno of  student-n

// The next line contains the name of  student-n

// The next line contains the marks in physics (out of 100) of  student-n

// The next line contains the marks in chemistry (out of 100) of  student-n

// The last line contains the marks in mathematics (out of 100) of  student-n

 

// Output Format

// First-line contains the rollno of  student-1

// The next line contains the name of  student-1

// The next line contains the total marks scored by student-1

// The next line contains average marks scored by student-1

// The next line contains the rollno of  student-2

// The next line contains the name of  student-2

// The next line contains the total marks scored by student-2

// The next line contains average marks scored by student-2

// ….

// …..

// The next line contains the rollno of  student-n

// The next line contains the name of  student-n

// The next line contains the total marks scored by student-n

// The last line contains average marks scored by student-n

// or invalid

 

// Example Input/Output 1:

// Input:

// 3

// 1001

// Arya

// 70

// 88

// 99

// 1002

// Balaji

// 98

// 68

// 87

// 1003

// Chitra

// 99

// 89

// 91

 

// Output:

// 1001

// Arya

// 257

// 85.66

// 1002

// Balaji

// 253

// 84.33

// 1003

// Chitra

// 279

// 93

// Example Input/Output 2:
// Input:
// 2
// 1203400
// Rai
// 66
// 77
// 88
// 1203401
// Varun
// 56
// 54
// 78

// Output:
// 1203400
// Rai
// 231
// 77
// 1203401
// Varun
// 188
// 62.66

// Example Input/Output 3:
// Input:
// 0

// Output:
// invalid

#include <iostream>
#include <stdlib.h>

using namespace std;

void invalid(){
    cout<<"invalid"<<endl;
    exit(1);
}

void check(int n){
    if(n<0 || n>100){
        invalid();
    }
}

class Marks{
    private:
        string roll;
        string name;
    
    public:
        void setRoll(){
            cin>>this->roll;
        }
        void setName(){
            cin>>this->name;
        }
        
        string getRoll(){
            return this->roll;
        }
        
        string getName(){
            return this->name;
        }
};

class Maths:public Marks{
    private:
        int marks;
    
    public:
        void setMarks(){
            cin>>this->marks;
            check(this->marks);
        }
        int getMarks(){
            return this->marks;
        }
};

class Physics:public Marks{
    private:
        int marks;
    
    public:
        void setMarks(){
            cin>>this->marks;
            check(this->marks);
        }
        int getMarks(){
            return this->marks;
        }
};

class Chemistry:public Marks{
    private:
        int marks;
    
    public:
        void setMarks(){
            cin>>this->marks;
            check(this->marks);
        }
        int getMarks(){
            return this->marks;
        }
};

class Total:public Chemistry,public Physics,public Maths{
    private:
        int total;
        float average;
        
    public:
        void setTotal(){
            this->total = this->Maths::getMarks()+this->Physics::getMarks()+this->Chemistry::getMarks();
            this->average = this->total/3;
        }
        
        void print(){
            cout<<this->Maths::getRoll()<<endl;
            cout<<this->Maths::getName()<<endl;
            this->setTotal();
            cout<<this->total<<endl;
            printf("%.2f\n",this->average);
        }
};

int main(){
    
    int n;
    cin>>n;
    
    check(n);
    
    Total arr[n];
    for(int i=0;i<n;i++){
        arr[i].Maths::setRoll();
        arr[i].Maths::setName();
        arr[i].Maths::setMarks();
        arr[i].Physics::setMarks();
        arr[i].Chemistry::setMarks();
    }

    for(int i=0;i<n;i++){

    }
    
    return 0;
}