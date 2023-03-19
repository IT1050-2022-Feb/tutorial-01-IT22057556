/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int x,y,sum=0;

  printf("Input an integer:");
  scanf("%d",&x);

  for(y=1; y<=x; y++)
    {
      sum=sum+y;
    }

  printf("Sum = %d",sum);
    
  
  return 0;
}

