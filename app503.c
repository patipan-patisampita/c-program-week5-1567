#include <stdio.h>
const int textrate = 7; // 7% = 7/100
float itemcost, salestax, total;

int main()
{
    printf("Please Enter Cost of item : ");
    scanf("%f", &itemcost);
    salestax = (textrate * itemcost) / 100;
    total = salestax + itemcost;
    printf("Item cost is= %.2f\n", itemcost);
    printf("Sales tax is= %.2f\n", salestax);
    printf("Total net is= %.2f\n", total);
    return (0);
} 