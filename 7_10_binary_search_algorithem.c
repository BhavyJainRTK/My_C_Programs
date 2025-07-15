#include<stdio.h>

int main()
{
    // DECLEARING THE VERIABLE AND ARRAY.

    int array[10];
    int n,key;
    int low,high,found = 0,mid;

    // TARING FROM USER.

    printf("HOW MUCH NUBMER YOU WANT TO ENTER > ");
    scanf("%d",&n);

    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("ENTER THE KEY YOU WANT TO SEARCH > ");
    scanf("%d",&key);

    // SEARCHING THE KEY IN ARRAY
    
    low = 0;
    high = n-1;
    found = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        // PRINTING IF FOUND.

        if (array[mid] == key)
        {
            found = 1;
            printf("KEY FOUND AT %d POSITION. \n",mid + 1);
            break;
        }
        else if (key < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            high = mid + 1;
        }

        // PRINTING IF NOT FOUND;
        
        if (!found)
        {
            printf("THE KEY NOT FOUND IN THE ARRAY.");
        }
        
    }
    

    
    
    
}