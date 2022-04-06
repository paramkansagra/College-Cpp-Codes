/*
A10Q2
Description
Write a C++ program to Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with  separate functions for each operation(sum, difference and product) whose real and imaginary parts are entered by the user; pass it via constructor

Input Format
First-line contains the real and imaginary part of first complex number
Next line contains the real and imaginary part of second complex number

Output Format
First line contains the sum of two complex numbers
Next line contains the difference  of two complex numbers
Next line contains the product of two complex numbers

Sample Testcase Input-1
1 2
3 4

Sample Testcase Output-1
4+i6
-2+i-2
-5+i10

Sample Testcase Input-2
-1 2
3 4

Sample Testcase Output-2
2+i6
-4+i-2
-11+i2

Sample Testcase Input-3
3 4
5 6

Sample Testcase Output-3
8+i10
-2+i-2
-9+i38

Sample Testcase Input-4
-1 -2
-3 -4

Sample Testcase Output-4
-4+i-6
2+i2
-5+i10

Sample Testcase Input-5
-1 -2
3 4

Sample Testcase Output-5
2+i2
-4+i-6
5+i-10
*/

#include <iostream>

using namespace std;

class rectangle{
    private:
        int aReal,bReal,aImg,bImg;
    
    public:
        void construct(){
            aReal = 0;
            bReal = 0;
            aImg = 0;
            bImg = 0;
        }
        
        void set_a_real(int x){
            aReal = x;
        }
        void set_b_real(int x){
            bReal = x;
        }
        void set_a_img(int x){
            aImg = x;
        }
        void set_b_img(int x){
            bImg = x;
        }
        
        int sum_real(){
            return aReal + bReal;
        }
        int sum_img(){
            return aImg + bImg;
        }
        int diff_real(){
            return aReal - bReal;
        }
        int diff_img(){
            return aImg - bImg;
        }
        int mult_real(){
            return aReal*bReal - aImg*bImg;
        }
        int mult_img(){
            return aReal*bImg + aImg*bReal;
        }
};

int main(){
    
    int aReal,bReal,aImg,bImg;
    cin>>aReal>>aImg;
    cin>>bReal>>bImg;
    
    rectangle r;
    r.construct();
    
    r.set_a_real(aReal);
    r.set_b_real(bReal);
    r.set_a_img(aImg);
    r.set_b_img(bImg);
    
    string b = "+i";
    
    cout<<r.sum_real()<<b<<r.sum_img()<<endl;
    cout<<r.diff_real()<<b<<r.diff_img()<<endl;
    cout<<r.mult_real()<<b<<r.mult_img()<<endl;
    
    return 0;
}