//write the function to reverse the array
#include<stdio.h>
void reverse_array(int a[],int n)
{
    int temp;
    for(int i=0;i<=n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
int main()
{
    int array[5]={1,2,3,4,5};
    reverse_array(array,5);
    for(int i=0;i<5;i++)
    printf("\nelement[%d] =%d",i,array[i]);

    return 0;
}