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
        for(i=0;feof(f))
        {
            if(fgetc(f) == '\t')
        }
    }
    else
    {
        printf("file opened successfully");
    }
    


    fclose(f);

    return 0;
}