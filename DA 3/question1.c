#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
 
struct employee{
    int number_hrs;
    int salary;
    char name[20];
};

int main(){

    int n;
    scanf("%d",&n);

    struct employee arr[n];

    for(int i=0;i<n;i++){
        scanf("%s %d %d",&arr[i].name,&arr[i].number_hrs,&arr[i].salary);
    }

    for(int i=0;i<n;i++){
        if(arr[i].number_hrs>=12){
            arr[i].salary += 150;
        }
        else if(arr[i].number_hrs>=10){
            arr[i].salary += 100;
        }
        else if(arr[i].number_hrs>=8){
            arr[i].salary += 50;
        }
    }

    for(int i=0;i<n;i++){
        printf("%s %d %d\n",arr[i].name,arr[i].number_hrs,arr[i].salary);
    }

    return 0;
}