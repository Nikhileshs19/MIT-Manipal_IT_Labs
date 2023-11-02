#include <stdio.h>

void print_m(int a[][3],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void scan_m(int a[][3], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void main(){
    int m,n;
    printf("Enter dimensions of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],c[m][n];

    printf("\nEnter elements in first matrix\n");
    scan_m(a,m,n);

    printf("\nEnter elements in second matrix\n");
    scan_m(b,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>=b[i][j])
                c[i][j] = a[i][j];
            else
                c[i][j] = b[i][j];
        }
    }

    printf("\nThe three matrices are:\n");
    print_m(a,m,n);
    print_m(b,m,n);
    print_m(c,m,n);

}
