#include <iostream>
 
using namespace std;
 
void sortString(string* &arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

class Sequence{
    private:
        string* arr;
        int n;
    public:
        Sequence(){
            n = 0;
            arr = NULL;
        }

        void addString(string s){
            n++;
            arr = (string*)realloc(arr,sizeof(string)*n);
            arr[n-1] = s;

            sortString(arr,n);
        }

        void deleteString(int a){
            int i = 0;
            while(i<=a){
                i++;
            }
            n--;
            for(;i<n;i++){
                arr[i] = arr[i+1];
            }
        }

        void printString(){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){

    Sequence s1;
    s1.addString("Param");
    s1.addString("Jayesh");
    s1.addString("Kansagra");

    s1.deleteString(2);

    s1.printString();

    return 0;
}