// Write a C++ Program to display the pattern like pyramid using the alphabet using the friend function. The pattern is as follows

//                  A

//              A B A

//            A B C B A

//          A B C D C B A

//        A B C D E D C B A

//      A B C D E F E D C B A

//    A B C D E F G F E D C B A

//  A B C D E F G H G F E D C B A

//  Input Format:

// The first line contains the size ‘n’

 

// Output Format:

// Print the pattern upto ‘n’

// Last line contains “Entered number is: n”

 

// Example Input/Output 1:

// Input:

// 8

// Output:
//                  A
//              A B A
//            A B C B A
//          A B C D C B A
//        A B C D E D C B A
//      A B C D E F E D C B A
//    A B C D E F G F E D C B A
//  A B C D E F G H G F E D C B A
// Entered number is: 8

// Example Input/Output 2:
// Input:
// 11

// Output:
//                      A
//                    A B A
//                  A B C B A
//                A B C D C B A
//              A B C D E D C B A
//            A B C D E F E D C B A
//          A B C D E F G F E D C B A
//        A B C D E F G H G F E D C B A
//      A B C D E F G H I H G F E D C B A
//    A B C D E F G H I J I H G F E D C B 
//  A B C D E F G H I J K J I H G F E D C B A
// Entered number is: 11

// Example Input/Output 3:
// Input:
// 3

// Output:
//       A
//    A B A
//  A B C B A
// Entered number is: 3

// Example Input/Output 4:
// Input:
// 0

// Output:
// Entered number is: 0

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    if(n<=0){
        cout<<"Entered number is: "<<n<<endl;
        exit(1);
    }
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=2*(n-i)-1;j++){
            cout<<" ";
        }
        char c = 'A';
        int count = 0;
        for(int j=0;j<=i;j++){
            if(j == 0 && i == 0) cout<<c;
            else cout<<c<<" ";
            c += 1;
            count++;
        }
        c = 'A' + i -1;
        for(int j = i;j>0;j--){
            if(j>1) cout<<c<<" ";
            else cout<<c;
            c--;
        }
        cout<<endl;
    }
    cout<<"Entered number is: "<<n<<" "<<endl;
    
    return 0;
}