#include <stdio.h>

void sort(int a[],int n, char c)
{
    int i, j, position,temp;
    if(c == 'a'){
        for (i = 0; i < (n - 1); i++)
        {
            position = a[i];

            for (j = i; j < n; j++)
            {
                if (position > a[j])
                {
                    position = a[j];
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
    else{
        for (i = 0; i < (n - 1); i++)
        {
            position = a[i];

            for (j = i; j < n; j++)
            {
                if (position < a[j])
                {
                    position = a[j];
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
}

void main()
{
    int n, ele, loc;
    char c;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int a[n];

    printf("Enter elements of the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array entered is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    while(c != 'a' && c!='d'){
        printf("\nEnter a to sort ascending, d to sort descending\n");
        scanf("%c",&c);
    }

    sort(a,n, c);

    printf("\nArray after sorting is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
