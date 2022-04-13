// A12-Q2
// Description

// Write a C++ program to find volume of Cube, Cylinder and Sphere using Function Overloading. Print ‘invalid’ and exit from the execution, if the boundary condition is not met.

// Boundary Condition:

// Length and breadth of the rectangle >0

// Input Format:

// The first line reads radius and height of a cylinder (int, int)

// The next line reads side of a cube (int)

// The next line reads radius of sphere (float)

 

 

// Output Format:

// The first line contains the Volume of cylinder

// The next line contains the volume of a cube

// The next line contains the volume of a sphere(float)

// (or)

// invalid

// Example Input/Output 1:

// Input:

// 2 3

// 4

// 5.6

// Output:

// 37.68

// 64

// 735.246

 

// Example Input/Output 2:

// Input:

// -1 2

// Output:

// invalid

// Example Input/Output 3:

// Input:

// 5 8

// 0

// Output:

// invalid

// Example Input/Output 4:

// Input:

// 5 10

// 6

// 0.0

// Output:

// invalid

#include <iostream>
#include <stdlib.h>

using namespace std;

class invalid{
    public:
        void checkInvalid(int x,int y){
            if(x<=0 || y<=0){
                cout<<"invalid";
                exit(1);
            }
        }
        void checkInvalid(int x){
            if(x<=0){
                cout<<"invalid";
                exit(1);
            }
        }
        void checkInvalid(float x){
            if(x<=0){
                cout<<"invalid";
                exit(1);
            }
        }
};

class volume{
    public:
        void findVolume(int x,int y){
            float ans = 3.14*x*x*y;
            printf("%.2f\n",ans);
        }
        void findVolume(int x){
            int ans = x*x*x;
            printf("%d\n",ans);
        }
        void findVolume(float r){
            float ans = (4*3.14*r*r*r)/3;
            printf("%.3f\n",ans);
        }
};

int main(){
    
    int x,y,z;
    float r;
    
    invalid i;
    volume v;
    
    cin>>x>>y;
    i.checkInvalid(x,y);
    
    cin>>z;
    i.checkInvalid(z);
    
    cin>>r;
    i.checkInvalid(r);
    
    v.findVolume(x,y);
    v.findVolume(z);
    v.findVolume(r);
    
    return 0;
}