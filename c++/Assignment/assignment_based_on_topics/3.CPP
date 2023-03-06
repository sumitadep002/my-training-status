#include<iostream>
using namespace std;
int main()
{
    char choice;
    do{
        cout<<"\nP - Print numbers";
        cout<<"\nA - Add a number";
        cout<<"\nM - Display mean of the numbers";
        cout<<"\nS - Display the smallest number";
        cout<<"\nL - Display the largest number";
        cout<<"\nQ - Quit";
        cout<<"\nEnter your choice:";
        switch (choice)
        {
        case 'P':
        case 'p':
            /* code */
            break;
        case 'A':
        case 'a':
            /* code */
            break;
        case 'M':
        case 'm':
            /* code */
            break;
        case 'S':
        case 's':
            /* code */
            break;
        case 'L':
        case 'l':
            /* code */
            break;
        case 'Q':
        case 'q':
            /* code */
            break;
        
        default:cout<<"\nUnknown selection, Pplease try again";
            break;
        }
    }while(choice!='Q' || choice != 'q');

    return 0;
}