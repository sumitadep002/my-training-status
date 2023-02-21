/*
Try the following code
print a1.x, a1.ch
Calculate size of union , offset of each member
*/
#include<stdio.h>

union A
{
int x;
int y;
char ch;
}a1;
a1.x=0x10;
a1.y=0x1121;

int main()
{
    printf("%d %c",a1.x,a1.ch);
    printf("\nsize of A %d",sizeof(A));
    printf("\naddress of x %d",&a1.x);
    printf("\naddress of y %d",&a1.y);
    printf("\naddress of ch %d",&a1.ch);
    return 0;
}