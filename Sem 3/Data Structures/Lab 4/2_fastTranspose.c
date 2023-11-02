#include<stdio.h>
#define MaxSize 50
typedef struct{
    int r,c,v;
}sparseMatrix;

void read(sparseMatrix *spm,int m,int n){
    int element,k=0;
    printf("Input elements:\n");
    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++){
            scanf("%d",&element);
            if(element==0)
                continue;
            else{
                k++;
                spm[k].r=i;
                spm[k].c=j;
                spm[k].v=element;
            }
    }
    spm[0].r=m;
    spm[0].c=n;
    spm[0].v=k;
}

void ftranspose(sparseMatrix *spm,sparseMatrix *T){
    int rT[spm[0].v],sp[spm[0].c],k;

    for(int i=0;i<spm[0].v;i++)
        rT[i]=0;
    for(int i=0;i<spm[0].c;i++)
        sp[i]=0;

    T[0].r=spm[0].c;
    T[0].c=spm[0].r;
    T[0].v=spm[0].v;

    for(int i=1;i<=spm[0].v;i++)
        rT[spm[i].c]++;

    sp[0]=1;
    for(int i=1;i<spm[0].c;i++)
        sp[i]=sp[i-1]+rT[i-1];

    for(int i=1;i<=spm[0].v;i++){
        k=sp[spm[i].c]++;
        T[k].r=spm[i].c;
        T[k].c=spm[i].r;
        T[k].v=spm[i].v;
    }

}

void display(sparseMatrix *spm){
    for(int i=0;i<=spm[0].v;i++){
        printf("%d %d %d\n",spm[i].r,spm[i].c,spm[i].v);
    }
}

int main(){
    sparseMatrix spm[MaxSize],T[MaxSize];
    int m,n;

    printf("Input order of Matrix:\n");
    scanf("%d %d",&m,&n);

    read(spm,m,n);

    ftranspose(spm,T);

    printf("\nTranspose =\n");
    display(T);


}
