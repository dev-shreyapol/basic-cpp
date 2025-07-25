#include <stdio.h>

void main(){
  int a;
  int b;
  int operation; // whether it is addition, substraction, multiplcation or division
  int result;
  int mybreak;

while(mybreak!=0)
{
  printf("\nEnter you first number\n");
  scanf("%d",&a);
  printf("\nEnter you second number\n");
  scanf("%d",&b);
  printf("Please select operation you want to perform:\n1 for addition\n2 for substraction\n3 for multiplication\n4 for division\n");
  scanf("%d",&operation);

  if(operation==1){
    result= a+b;
  }

  if(operation==4){
    result= a/b;
  }

   if(operation==2){
    result= a-b;
  }

   if(operation==3){
    result= a*b;
  }

    printf("Answer is %d\n", result);
    printf("Enter any key to continue or 0 to escape");
    scanf("%d",&mybreak);
  }
}