#include <stdio.h>

void main(){
    int salary;
    char name[50];
    // This will get the name of student
    printf("Please enter your name\n");
    // This will assign value to name
    scanf("%s",name);
    printf("Please enter your salary\n");
    scanf("%d",&salary);
    printf("Hi %s, your salary is %d\n", name, salary);
}