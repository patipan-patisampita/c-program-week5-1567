#include <stdio.h>
int x = 0b1011; //binary = 2
int y = 0x10; //hexadecimal = 16
int z = 10; //Decimal = 10

int main()
{
    printf("X in Decimal :%d\n", x);
    printf("X in Octal :%o\n", x); 
    printf("X in Hexadecimal :%x\n\n", x);

    printf("Y in Decimal :%d\n", y);
    printf("Y in Octal :%o\n", y);
    printf("Y in Hexadecimal :%x\n", y);

    printf("Z in Decimal :%d\n", z);
    printf("Z in Octal :%o\n", z);
    printf("Z in Hexadecimal :%x\n\n", z);
    return 0;
}