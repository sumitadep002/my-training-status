#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    string binary;
    int dec=0;
    int temp=0;
    cout<<"enter number in binary in 32 or less than 32 bit ";
    cin>>binary;
    cout<<"Bin : "<<binary;
    int strLength=strlen(binary);
    for(int i=0,j=strLength-1;i<strLength;i++,j--)
    {
        temp=binary[i];
        cout<<pow(2,j)*temp;
    }
    cout<<endl<<"decimal is "<<dec;
    
    return 0;
}