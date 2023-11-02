#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int item;
    struct node *next;
    struct node *prev;
}node;

void print(node* start){
    if(start==NULL){
        printf("Link-List Empty\n");
        return;
    }
    while(start->next!=NULL)
        start = start->next;

    while(start!=NULL){
        printf("%d ",start->item);
        start=start->prev;
    }
    printf("\n");
}


node* ins_end(node* start,int element){

    node *cur = start;
    node *temp =(node*)malloc(sizeof(node));
    temp->item = element;
    temp->next=NULL;
    temp->prev=NULL;

    if(start == NULL)
        return temp;

    while((cur->next)!=NULL)
        cur=cur->next;
    cur->next=temp;
    temp->prev=cur;
    return start;
}

node* addition(node* X1,node* X2){

    int carry=0,sum;
    node* Ans = NULL;

    while(X1!=NULL&&X2!=NULL){
        sum=X1->item+X2->item+carry;
        if(sum>9){
            carry = sum/10;
            sum=sum%10;
        }
        Ans = ins_end(Ans,sum);
        X1=X1->next;
        X2=X2->next;
        print(Ans);
    }

    if(X1==NULL&&X2==NULL){
        if(carry!=0){
            Ans = ins_end(Ans,carry);
        }
        return Ans;
    }

    if(X1==NULL){
        while(carry!=0){
            sum = X2->item+carry;
            if(sum>9){
                carry = sum/10;
                sum=sum%10;
            }
            Ans = ins_end(Ans,sum);
            X2=X2->next;
        }
        return Ans;
    }
    if(X2==NULL){
        while(carry!=0){
            sum = X1->item+carry;
            if(sum>9){
                carry = sum/10;
                sum=sum%10;
            }
            Ans = ins_end(Ans,sum);
            X1=X1->next;
        }
        return Ans;
    }

}

int main(){
    int controller;
    node *X1 = NULL;
    node *X2 = NULL;
    char str[1000];

    printf("Input the num 1 and input '#' at the end to stop input");
    scanf("%[^#]",str);
    fflush(stdin);
    puts(str);

    for(int i = strlen(str);i>=0;i--){
        X1=ins_end(X1,(str[i]-'0'));
    }

    printf("Input the num 2 and input '#' at the end to stop input");
    scanf("%[^#]",str);

    for(int i = strlen(str);i>=0;i--){
        X2=ins_end(X1,(str[i]-'0'));
    }

    node* ans = addition(X1,X2);
    print(ans);


}


