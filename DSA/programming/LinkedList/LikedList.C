#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *link;
};
typedef struct node node;

node *HEAD;
node *TAIL;
int count = 0;
void reverse();
void pushFront(int);
void pushAt(int, int);
void pushBack(int);
void delFront();
void delEnd();
void delAt(int);
void print();
int main()
{
    HEAD = NULL;
    TAIL = NULL;
    int n;
    int temp;
    int position;
    int choice;
    do
    {
        fflush(stdin);
        printf("\n1.Insert an element at front ");
        printf("\n2.Insert an element at end ");
        printf("\n3.Insert an element at nth position ");
        printf("\n4.Remove an element from front ");
        printf("\n5.Remove an element from end ");
        printf("\n6.Remove an element from nth position ");
        printf("\n7.Show all elements of Linked List ");
        printf("\n8.Reverse order of elements ");
        printf("\n9.Quit ");

        printf("\n\nEnter you choice ");
        scanf("%d", &choice);
        printf("\nsize of linked list %d\n", count);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            printf("\nenter number: ");
            scanf("%d", &n);

            pushFront(n);
            break;
        case 2:
            printf("\nenter number: ");
            scanf("%d", &n);
            pushBack(n);
            break;
        case 3:
            printf("\nenter number and position: ");
            scanf("%d %d", &n, &position);
            pushAt(n, position);
            break;
        case 4:
            delFront();
            break;
        case 5:
            delEnd();
            break;
        case 6:
            printf("\nenter position: ");
            scanf("%d", &position);
            delAt(position);
            break;
        case 7:
            print();
            break;
        case 8:
            reverse();
            break;
        case 9:
            printf("\nOK\nprogram will be terminated");
            break;

        default:
            break;
        }
    } while (choice != 9);

    return 0;
}
void pushFront(int x)
{
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->link = HEAD;
    if (HEAD == NULL)
        TAIL = temp;
    HEAD = temp;

    count++;
}
void print()
{
    node *temp = HEAD;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->link;
    }
}
void pushAt(int x, int pos = 1)
{
    node *trav, *temp;

    if (pos == 1)
    {
        pushFront(x);
        count++;
    }
    else
    {

        trav = HEAD;
        temp = (node *)malloc(sizeof(node));
        temp->data = x;

        for (int i = 1; i < pos - 1; i++)
        {
            trav = trav->link;
        }
        temp->link = trav->link;
        trav->link = temp;
        count++;
    }
}
void pushBack(int x)
{

    if (TAIL == NULL || HEAD == NULL)
    {
        TAIL = (node *)malloc(sizeof(node));
        HEAD = TAIL;
        count++;
    }
    else
    {
        TAIL->link = (node *)malloc(sizeof(node));
        TAIL = TAIL->link;
        count++;
    }
    TAIL->data = x;
    TAIL->link = NULL;
}
void delFront()
{
    if (HEAD == NULL)
    {
        printf("\nNothing to delete");
        count = 0;
    }
    else if (HEAD->link == NULL)
    {
        printf("\n%d is removed", HEAD->data);
        HEAD = HEAD->link;
        free(HEAD);
        TAIL = NULL;
        count--;
    }
    else
    {
        printf("\n%d is removed", HEAD->data);
        node *temp = HEAD;
        HEAD = HEAD->link;
        free(temp);
        count--;
    }
}
void delEnd()
{
    if (HEAD == NULL)
    {
        printf("\nNothing to delete");
        count = 0;
    }
    else if (HEAD->link == NULL)
    {
        printf("\n%d is removed", HEAD->data);
        free(HEAD);
        free(TAIL);
        HEAD = NULL;
        TAIL = NULL;
        count--;
    }
    else
    {
        node *temp, *previous;
        temp = HEAD;
        while (temp->link != NULL)
        {
            TAIL = temp;
            temp = temp->link;
        }
        TAIL->link = NULL;
        free(temp);
        count--;
    }
}
void delAt(int pos)
{
    if (pos == 1)
    {
        delFront();
        count--;
    }
    else
    {

        node *garbage, *current;
        current = HEAD;

        for (int i = 1; i < pos - 1; i++)
        {
            current = current->link;
        }
        garbage = current->link;
        printf("\n%d is removed", garbage->data);
        current->link = garbage->link;
        free(garbage);
        count--;
    }
}
void reverse()
{
    int iteration = 1;
    int number_comparison = 1;
    int temp = 0;
    node *temp_ptr;
    node *trav;
    trav = HEAD;

    while (iteration < count)
    {
        trav = HEAD;
        while (number_comparison <= count-1)
        {
            temp = trav->data;

            temp_ptr = trav->link;

            trav->data = temp_ptr->data;
            temp_ptr->data = temp;
            trav = trav->link;
            number_comparison++;
        }
        iteration++;
        number_comparison=iteration;
    }
}