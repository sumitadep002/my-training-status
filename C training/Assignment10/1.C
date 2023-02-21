/*

*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    int i=0;
    char message[100] ;
    f = fopen("a.txt", "r");
    if (f == NULL)
    {
        printf("unable to open file");
    }
    else
    {
        printf("file opened successfully");
    }
    printf("\nmessage: ");
    
    while (fgets(message,20,f)!=NULL)
    {
        printf("%s",message);
    }
    


    fclose(f);

    return 0;
}