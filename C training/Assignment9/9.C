/*
Analyse the following code
*/
#include<stdio.h>
union A
{
int x;
float y;
double z;
int arr[2];
}a1;

union B
{
int x;
short int y;
char ch;
char carr[4];
}b1;

int main()
{
a1.y=6.25f;
printf("y=%d\n",a1.y);
a1.z=0.15625;
printf("%x%x\n",a1.arr[1],a1.arr[0]);
b1.x=0x41424344;

return 0;
}