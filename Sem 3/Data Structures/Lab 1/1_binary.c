
#include <stdio.h>

void sort(int a[],int n){
    int temp;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

int search(int a[],int n, int ele){
    int first=0, last=n, mid;
    while (first <= last) {
        int mid = first + (last - first) / 2;

        if (ele == a[mid])
            return mid;

        if (ele > a[mid])
            first = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}

void main(){
    int n, ele, loc;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int a[n];

    printf("Enter elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array entered is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    sort(a,n);
    printf("\nArray after sorting is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\nEnter element to be searched\n");
    scanf("%d",&ele);

    loc = search(a,n,ele);

    if(loc == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d, or position %d",loc,loc+1);
    }
}
