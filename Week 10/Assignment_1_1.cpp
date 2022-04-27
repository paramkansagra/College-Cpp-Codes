// A14-Q1
// Description

// Write a C++ program that needs to write the class Matrix which has a 2d integer array You also need to write a member function to overload the operator +. The function’s job will be to add two objects of Matrix-type and return the resultant Matrix.

// Boundary Condition

// 1 <= N <= 100

// 1 <= M <= 100

// 1 <= Aij <= 10, where Aij is the element in the ith row and jth Column of the Matrix.

 

// Input Format

// First line contains the contain two integers N and M which denote the square matrix size of matrix-1 and the square matrix size of matrix-2 respectively of the two matrices that will follow on the next two lines.

// These next two lines will each contain N*M elements describing the two matrices in row-wise format i.e. first M elements belong to the first row, next M elements belong to the second row and so on.

// Output Format

// First line contains sum of first matrix or invalid

// The next line contains the sum of the second matrix

 

// Example Input/Output 1:

// Input:

// 2

// 2

// 1

// 2

// 3

// 4

// 5

// 6

// 7

// 8

// Output:

// 6 8

// 10 12

// Explanation :

// The sum of first matrix and the second matrix is the matrix given in the output.using overloaded comparison operator:

// Example Input/Output 2:

// Input:

// 3

// 3

// 1

// 2

// 3

// 4

// 5

// 6

// 7

// 8

// 9

// 10

// 11

// 12

// 13

// 14

// 15

// 16

// 17

// 18

// Output:

// 11 13 15

// 17 19 21

// 23 25 27

// Example Input/Output 3:

// Input:

// 1

// 1

// 11

// 22

// Output:

// 33

// Example Input/Output 4:

// Input:

// 1

// 0

 

// Output:

// invalid

#include <stdlib.h>
#include <iostream>

using namespace std;

void invalid(){
    cout<<"invalid";
    exit(1);
}

void check(int n){
    if(n<=0){
        invalid();
    }
}

class Matrix{
    private:
        int n;
        int arr[10][10];
    
    public:
        Matrix(){
            cin>>this->n;
            check(this->n);
        }
        
        void setMatrix(){
            for(int i=0;i<this->n;i++){
                for(int j=0;j<this->n;j++){
                    cin>>this->arr[i][j];
                }
            }
        }
        
        int getN(){
            return this->n;
        }
        
        int getArr(int i,int j){
            return this->arr[i][j];
        }
        
        void printMatrix(){
            for(int i=0;i<this->n;i++){
                for(int j=0;j<this->n;j++){
                    cout<<this->arr[i][j]<<" ";
                }cout<<endl;
            }
        }
        
        void operator +(Matrix m2){
            for(int i=0;i<this->n;i++){
                for(int j=0;j<this->n;j++){
                    this->arr[i][j] += m2.getArr(i,j);
                }
            }
        }
};

int main(){
    Matrix m1;
    Matrix m2;
    
    if(m1.getN() != m2.getN()){
        invalid();
    }
    
    m1.setMatrix();
    m2.setMatrix();
    
    m1+m2;
    m1.printMatrix();
}