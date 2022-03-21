#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[20];
    int mark1,mark2,mark3,reg;
    int total;
};

int main(){

    int n;
    scanf("%d",&n);

    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d %d",&s[i].name,&s[i].reg,&s[i].mark1,&s[i].mark2,&s[i].mark3);
        s[i].total = s[i].mark1+s[i].mark2+s[i].mark3;
    }

    char topper[20];
    int maxx = 0;
    for(int i=0;i<n;i++){
        if(s[i].total>maxx){
            maxx = s[i].total;
            strcpy(topper,s[i].name);
        }
    }

    printf("Topper is %s\n",topper);

    return 0;
}