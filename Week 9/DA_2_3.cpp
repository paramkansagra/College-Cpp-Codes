#include <iostream>
 
using namespace std;

class gre{
    private:
        int v[10];
        int qualitative;
        int total_v;
    
    public:
        gre(int arr[],int qua){
           for(int i=0;i<10;i++){
               this->v[i] = arr[i];
            }
            this->qualitative = qua;
        }

        bool check(){
            total_v = 0;
            for(int i=0;i<10;i++){
               total_v += v[i];
            }
            
            if(total_v>=155 && qualitative>=155 && total_v+qualitative>=320){
                return true;
            }
            
            return false;
       }

};
 
int main(){

    int marks[10];
    int quali;

    for(int i=0;i<10;i++){
        cin>>marks[i];
    }

    cin>>quali;

    gre std1(marks,quali);

    if(std1.check() == true){
        cout<<"addmission granted";
    }
    else{
        cout<<"addmission not granted";
    }

    return 0;
}