/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
  float avg;

  std::cout<<("Enter marks for subject 1 :")<<endl;
  scanf("%d", &sub1);
  std::cout<<("Enter marks for subject 2 :")<<endl;
  scanf("%d", &sub2);

  avg=(sub1+sub2)/2;

  printf("Average is %.2f", avg);
  
  return 0;
}

