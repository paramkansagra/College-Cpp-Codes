#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct student{
    char grade;
    int credit;
};
 
int main(){

    int n;
    scanf("%d",&n);

    struct student arr[n];
    for(int i=0;i<n;i++){
        scanf(" %c %d",&arr[i].grade,&arr[i].credit);
    }

    float cgpa = 0;
    int sum_credit = 0;
    for(int i=0;i<n;i++){
        sum_credit += arr[i].credit;
        switch (arr[i].grade){
            case 'S':
                cgpa += 10*arr[i].credit;
                break;
            case 'A':
                cgpa += 9*arr[i].credit;
                break;
            case 'B':
                cgpa += 8*arr[i].credit;
                break;
            case 'C':
                cgpa += 7*arr[i].credit;
                break;
            case 'D':
                cgpa += 6*arr[i].credit;
                break;
            case 'E':
                cgpa += 5*arr[i].credit;
                break;
        }
    }

    printf("%.2f\n",cgpa/sum_credit);

    return 0;
}