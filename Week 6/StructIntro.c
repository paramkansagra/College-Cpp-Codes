#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// made a structure named student
// having name age branch and gender as the parameters

struct student{
    char name[25];
    int age;
    char branch[10];
    char gender;
};

int main(){

    struct student s1;
    
    s1.age = 18;
    strcpy(s1.name,"PARAM");
    s1.gender = 'M';
    strcpy(s1.branch,"CseCore");

    printf("Name => %s\n",s1.name);
    printf("age => %d\n",s1.age);
    printf("gender => %c\n",s1.gender);
    printf("branch => %s\n",s1.branch);
    
    return 0;
}