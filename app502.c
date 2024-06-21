// ข้อมูลอักขระ
#include <stdio.h>
#include <stdbool.h>
int x = 65;// Decimal = 10
int y = 234; // Decimal = 10
bool isMarry = true;
bool isMale = false;

int main()
{
    printf("X in Decimal :%d\n", x);
    printf("X in Octal :%o\n", x);
    printf("X in Hexadecimal :%x\n", x);
    printf("X in Character :%c\n", x);
    printf("isMarry in Bool :%d\n\n", isMarry);

    printf("Y in Decimal :%d\n", y);
    printf("Y in Octal :%o\n", y);
    printf("Y in Hexadecimal :%x\n", y);
    printf("Y in Character :%c\n", y);
    printf("isMale in Bool :%d\n\n", isMale);
    return 0;
}