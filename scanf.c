#include <stdio.h>

void main() {
    char name[50];
    int age;
    printf("Enter your name");
    scanf("%s", name);
    printf("Enter the age");
    scanf("%d", &age);
    printf("Hii %s You are %d years old", name, age);
}


