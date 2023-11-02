
#include <stdio.h>


void sort(int a[], int n, char c)
{
    int i, key, j;
    if(c == 'a'){
        for (i = 1; i < n; i++)
        {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] > key)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
        }
    }
    else{
        for (i = 1; i < n; i++)
        {
            key = a[i];
            j = i - 1;
            while (j >= 0 && a[j] < key)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = key;
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
    sort(a,n,c);

    printf("\nArray after sorting is\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
