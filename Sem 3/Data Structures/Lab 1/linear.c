#include <stdio.h>


int search(int a[],int n, int ele){
    int loc;
    for(int i=0;i<n;i++){
        if(a[i]==ele){
            loc = i;
            return loc;
        }
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
