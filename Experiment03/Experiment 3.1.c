/* Experiment - 3 
 3.1.⁠ ⁠Write a C program to check whether a number is Even or ODD */
#include<stdio.h>
#include<conio.h>
int main() {
  int a;
  printf("Name: DYUTI SHARMA\nSap-ID: 590021983\nCourse: Bsc CS\n Batch: 1st\n"); 
  printf("-----------------------------\n");
  
  printf("Enter a number = ");
  scanf("%d", &a);
  
  if (a % 2 ==0 )
    printf("The number is Even");
  else 
    printf("The number is odd");
  
  getch();
  return 0;
}
