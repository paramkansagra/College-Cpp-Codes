#include <stdio.h>

int main(){

    int day,month,year,curYear;

    printf("input day month and year of the birth ");
    scanf("%d %d %d",&day,&month,&year);

    printf("input current year ");
    scanf("%d",&curYear);

    // edge confition where 29 feb and a leap year

    int birthdays = 0;
    if(day == 29 && month == 2){
        for(int i=year+1;i<=curYear;i++){
            if(i%400 == 0 || (i%4 == 0 && i%100 != 0)){
                birthdays++;
            }
        }
    }
    else{
        for(int i=year+1;i<=curYear;i++){
            birthdays++;
        }
    }

    printf("the number of birthdays celebrated are %d",birthdays);

    return 0;
}