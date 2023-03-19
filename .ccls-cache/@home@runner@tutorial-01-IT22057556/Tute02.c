/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float distance, rate;
  float hold_price, tot_price;

  printf("Input the distance car has travelled in kilometers:");
  scanf("%f", &distance);

  if (distance > 30) {
    rate = 40.00;
    hold_price = rate * (distance - 30);
    tot_price = hold_price + (30 * 50.00);
  } else {
    rate = 50.00;
    tot_price = distance * rate;
  }

  printf("The total cost is %.2f", tot_price);

  return 0;
}
