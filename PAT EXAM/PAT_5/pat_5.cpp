#include <iostream>

using namespace std;

template <class a>
class findMax{
    public:
        int elements;

        a* list = NULL;
        
        int upper,lower;
        
        void lol(){
            if(lower<0 || upper>elements){
                cout<<"Out of range"<<endl;
            }
        }
        
        void getData(){
            cin>>elements;
            
            list = new a[elements];
            
            for(int i=0;i<elements;i++){
                cin>>list[i];
            }
            
            cin>>lower>>upper;
        }
        
        void findMaxxOfList(){
            a max = list[lower];
            for(int i=lower;i<upper;i++){
                if(max<list[i]){
                    max = list[i];
                }
            }
            
            cout<<max<<endl;
        }
};

int main(){
    
    int c;
    cin>>c;
    
    if(c == 0){
        findMax<int> haha;
        haha.getData();
        haha.lol();
        haha.findMaxxOfList();
    }
    else{
        findMax<string> haha;
        haha.getData();
        haha.lol();
        haha.findMaxxOfList();
    }

    
    return 0;
}