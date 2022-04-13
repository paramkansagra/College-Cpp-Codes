// A11-Q2
// Description

// Generate boarding pass for the passengers of a ship which starts from Chennai  to Andaman. The boarding pass must be generated automatically with a pass number that begins with “CA” and followed by a number that is automatically incremented from value ‘x’, details like passenger name, age, mobile number, address, date of journey and fare. There is a seasonal discount based on the age of the passengers. Write a non member function(friend) called discount which calculates the discount in the fare for the passenger with the following discounts. For the  age group `between 12 and 58, both inclusive’  there is 20% discount in the fare,  for the age group ‘above 58’, there is 40% discount and for the children (age under 12), 50% discount. Write a C++ program to generate pass for ‘n’ users.

// Input Format:
// Passenger name
// Value of ‘x’
// Age
// Address
// date_of_Journey
// mobile number
// Original Fare
 
// Output Format:
// passenger name
// Boarding pass number
// age
// date_of_Journey
// mobile number
// Total fare after discount based on age

// Example Input/Output 1:
// Input:
// Rakesh
// 777
// 23
// Chennai
// 23-April-2022
// 123ABC456
// 8000.00

// Output:
// Rakesh
// CA777
// 23
// 23-April-2022
// 123ABC456
// 6400

// Example Input/Output 2:
// Input:
// Shreya
// 888
// 21
// Jaipur
// 24-April-2022
// 125DFG34
// 7000.00

// Output:
// Shreya
// CA888
// 21
// 24-April-2022
// 125DFG34
// 5600

// Example Input/Output 3:
// Input:
// Abhi
// 566
// 65
// Mumbai
// 22-April-2022
// 3434ASWE4905
// 9000.00

// Output:
// Abhi
// CA566
// 65
// 22-April-2022
// 3434ASWE4905
// 5400

#include <iostream>
#include <string.h>

class data{
    public:
        char name[100],x[100],address[100],date[100],mob[100];
        int age,fare;
        friend void fare(data* d1);
};

void fare(data* d1){
    if(d1->age<12) d1->fare = d1->fare*0.5;
    else if(d1->age>58) d1->fare = d1->fare*0.6;
    else d1->fare = d1->fare*0.8;
    
}

int main(){
    
    data d1;
    scanf("%s %s %d %s %s %s %d",&d1.name,&d1.x,&d1.age,&d1.address,&d1.date,&d1.mob,&d1.fare);
    fare(&d1);

    printf("%s\n",d1.name);
    printf("CA%s\n",d1.x);
    printf("%d\n",d1.age);
    printf("%s\n",d1.date);
    printf("%s\n",d1.mob);
    printf("%d",d1.fare);
    
    return 0;
}