#include <stdio.h>

void sort(int a[],int n,char c){
    int temp;
    for(int j=0;j<n;j++){
        if(c == 'a'){
            for(int i=0;i<n;i++){
                if(a[i]>a[i+1]){
                    temp = a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        else if(c == 'd'){
            for(int i=0;i<n-1;i++){
                if(a[i]<a[i+1]){
                    temp = a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
    }
}

void main(){
    int n, ele, loc;
    char c;
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
    while(c != 'a' && c!='d'){
        printf("\nEnter a to sort ascending, d to sort descending\n");
        scanf("%c",&c);
    }

    sort(a,n,c);

    printf("\nArray after sorting is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
