#include<stdio.h>

struct name
{
    int a;
    float b;
};

int main()
{

    struct name *ptr,p;

    /* Referencing pointer to memory address of p */
    ptr=&p;

    printf("Enter integer: ");
    scanf("%d", &(*ptr).a);

    printf("Enter number: ");
    scanf("%f",&(*ptr).b);

    printf("Displaying: ");
    printf("%d %f",(*ptr).a,(*ptr).b);
    return 0;

}