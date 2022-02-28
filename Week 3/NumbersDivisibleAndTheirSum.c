// Description

// Given start, end and divisor ‘d’as positive integers.,

// write a program in C to find the number sequence and sum of all integer between start
// and endw hich are divisible by ‘d’.

// Print ‘invalid’ if the boundary conditions are not met.

// Boundary Conditions:
// 0 < start >= 500

// 0<= end >=1000

// div>0

// InputFormat

// Read start, end and divisor ‘d’

// OutputFormat

// In the first line, Print the number sequence, in a single line, tab space sequence.
// In the next line, Print the sum of all integer between startand endwhich are divisible by ‘d’.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int start,end,d;
    scanf("%d %d %d",&start,&end,&d);

    if(start<=0 || start> 500 || end<=0 || end >= 1000 || d<=0){
        printf("invalid \n");
    }
    else{
        int sum = 0;
        for(int i=start;i<=end;i++){
            if(i%d == 0){
                sum += i;
                printf("$%d \n",i);
            }
        }
        printf("%d",sum);
    }

    return 0;
}