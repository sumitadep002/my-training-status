    /*
    Write a function to search the given number into the array using linear search and return the 
    address of the element. If element is not found it should return NULL
    */
    #include<stdio.h>
    #include<stdlib.h>
    void accept_array(int *a,int n)
    {
        for (int i = 0; i < n; i++) 
            {
                printf("\nelement[%d]=",i);
                scanf("%d",&a[i]);
            }

    }
    char search_array(int *a,int n,int number){
        for(int i=0;i<n;i++)
        {
            if(number==a[i])
            return i;
        }
        return NULL;
    }
    int main()
    {
        int* ptr;
        int n,search_number;
        char index;
    
        printf("Enter number of elements:");
        scanf("%d",&n);
        printf("Entered number of elements: %d\n", n);
    
        // Dynamically allocate memory using malloc()
        ptr = (int*)malloc(n * sizeof(int));
    
        // Check if the memory has been successfully
        // allocated by malloc or not
        if (ptr == NULL)
            printf("Memory not allocated.\n");
        else {
    
            // Memory has been successfully allocated
            printf("Memory successfully allocated using malloc.\n");
    
            accept_array(ptr,n);


            printf("enter the number you want to search in array element=");
            scanf("%d",&search_number);

            index=search_array(ptr,n,search_number);
            if(index!=-NULL)
            printf("\nindex value of %d is %d",search_number,search_array(ptr,n,search_number));
            else
            printf("%d does on exists",search_number);
        }
    
        return 0;
    }