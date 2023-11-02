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

void magic(int a[][3],int m,int n){
    int flag;
    int sum=0,sum1=0,sum2=0,sum3=0;

    //setting the initial sum using the diagonal
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += a[i][j];
            }
        }
    }
     printf("%d\n",sum);
    //checking in rows
    for(int i=0;i<m;i++){
        sum1 =0;
        for(int j=0;j<n;j++){
            sum1 += a[i][j];
        }
        printf("%d\n",sum1);
        if(sum1 == sum)
            flag = 1;
        else{
            flag =0;
            break;
        }
    }

    //checking in columns
    for(int i=0;i<m;i++){
        sum2 =0;
        for(int j=0;j<n;j++){
            sum2 += a[j][i];
        }
        printf("%d\n",sum2);
        if(sum2 == sum)
            flag = 1;
        else{
            flag =0;
            break;
        }
    }

    //checking the inverse diagonal
    /*for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum3 += a[i][n-j-1];
            }
        }
        printf("%d\n",sum3);
        if(sum3==sum)
            flag = 1;
        else{
            flag = 0;
            break;
        }
    }*/

    if(flag == 1)
        printf("\nMatrix is a magic square");
    else
        printf("\nMatrix is not a magic square");
}
void main(){
    int m,n;
    printf("Enter dimensions of matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];

    printf("\nEnter elements in matrix\n");
    scan_m(a,m,n);

    printf("\nMatrix is:\n");
    print_m(a,m,n);

    magic(a,m,n);

}
