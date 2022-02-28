// Description

// Given with the starting number(start)of the Arithmetic Progression (A.P.)series, the number of items(n)

// for  the A.P. seriesand common difference(d), 

// write a c program to find out the series and calculate the sum of an A.P. series. 

// Print ‘invalid’, if the boundary conditions are not met.

// Boundary Conditions:

// 0< Start >500

// n>0

// d>=0

// InputFormat

// First line contains the starting number of the Arithmetic Progression (A.P.)series.
// Next line contains the number of items for the A.P. series
// Next line contains common difference

// OutputFormat

// Print the series and calculate the sum of an A.P. seriesas per the format mentioned in the testcases.

#include <stdlib.h>
#include <stdio.h>

int main(){

    int start,n,d;
    scanf("%d %d %d",&start,&n,&d);

    if(start<=0 || start>=500 || n<=0 || d<0){
        printf("invalid \n");
    }
    else{
        int sum = 0;
        for(int i=0;i<n;i++,start+=d){
            if(i != n-1){
                printf("%d + ",start);
                sum += start;
            }
            else{
                printf("%d = ",start);
                sum += start;
            }
        }
        printf("%d",sum);
    }

    return 0;
}