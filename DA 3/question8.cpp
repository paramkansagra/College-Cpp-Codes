#include <iostream>
 
using namespace std;
 
class book{
    public:
        int AccessionNumber,yearOfPublication,Cost,Availabality;
        string NameOfAuthor,PublisherName;

        void print(int AccessionNumber){
            cout<<AccessionNumber<<" "<<NameOfAuthor<<" "<<PublisherName<<" "<<yearOfPublication<<endl;
        }
};

class member{
    public:
        int MemberId,MaximumLimit,TotalIssued;
        string Name;

        void print(int memberId){
            cout<<MemberId<<" "<<Name<<endl;
        }
};

class LIS:public book,public member{
    public:
        void issue(){
            if(MemberId != 0 && TotalIssued<MaximumLimit && Availabality>0){    
                cout<<"Book Issued"<<endl;
                Availabality--;
                TotalIssued++;
            }
            else{
                cout<<"Book Not Issued"<<endl;
            }
        }
};

int main(){

    LIS l1;

    l1.MemberId = 101;
    l1.MaximumLimit = 5;
    l1.TotalIssued = 0;

    l1.AccessionNumber = 10202;
    l1.Availabality = 10;
    l1.Cost = 200;
    l1.Name = "Aditya";
    l1.NameOfAuthor = "James clear";
    l1.PublisherName = "Penguine house";

    l1.issue();

    return 0;
}