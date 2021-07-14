/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1 , mark2 , total = 0  ;
  float average = 0.0 ;  

  printf("Enter the marks 01 : ");
  scanf("%d", &mark1 ); 

  printf("Enter the marks 02 : ");
  scanf("%d", &mark2 ); 
 
  total = mark1 + mark2 ; 
  average = (float)total / 2 ; 

  printf("Total is %d\n", total);
  printf("Average is %.2f\n", average);
  
  return 0;
}

