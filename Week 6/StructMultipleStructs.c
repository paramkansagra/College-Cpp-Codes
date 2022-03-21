#include <stdio.h>
#include <stdlib.h>

struct student_college_detail{
    int college_id;
    char college_name[50];
};

struct student_detail{
    int id;
    char name[20];
    float percentage;

    // inside the structure
    struct student_college_detail clg_data;
};

int main(){

    struct student_detail s1;
    printf("input student id ");
    scanf("%d",&s1.id);

    printf("input name ");
    scanf("%s",&s1.name);

    printf("input percentage ");
    scanf("%f",&s1.percentage);

    printf("input college id ");
    scanf("%d",&s1.clg_data.college_id);

    printf("input college name ");
    scanf("%s",&s1.clg_data.college_name);

    // printing all the data
    printf("student name => %s\n",s1.name);
    printf("student percentage => %.2f\n",s1.percentage);
    printf("student id => %d\n",s1.id);
    printf("student college name => %s\n",s1.clg_data.college_name);
    printf("student college id => %d\n",s1.clg_data.college_id);

    return 0;
}