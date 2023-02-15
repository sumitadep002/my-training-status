/* Print the ASCII value of user entered character in decimal, hex, octal format and also print the 
character for user entered ASCII value.*/
#include<stdio.h>
int main()
{
    char character;
    int ASCII;

    printf("enter the character ");//
    scanf("%c",&character);

    printf("decimal= %d",character);
    printf("\nhex= %x",character);
    printf("\noctal= %o",character);

    printf("enter the ASCII value: ");
    scanf("%d",&ASCII);

    printf("\ncharacter %c's ASCII value is %d",character,ASCII);
    //incomplete

    return 0;
}