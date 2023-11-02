#include <stdio.h>

struct student{
    char name[20];
    int roll;
    int grade;

};



void main(){
    int i;
    struct student s[3],temp;
    printf("Enter information of students:\n");

    for(i=0;i<3;i++){
        fflush(stdin);
        printf("Enter name:\n");
        gets(s[i].name);
        printf("Enter roll no:\n");
        scanf("%d",&s[i].roll);
        printf("Enter grade:\n");
        scanf("%d",&s[i].grade);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 3; i++) {
        printf("\nFirst name: ");
        puts(s[i].name);
        printf("Roll no: %d",s[i].roll);
        printf("\nGrade: %d", s[i].grade);
        printf("\n");
    }

    for(int i=0;i<3-1;i++){
        if(s[i].roll > s[i+1].roll){
            temp = s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
        }
    }

    printf("Displaying Sorted Information:\n\n");

    for (i = 0; i < 3; i++) {
        printf("\nFirst name: ");
        puts(s[i].name);
        printf("Roll no: %d",s[i].roll);
        printf("\nGrade: %d", s[i].grade);
        printf("\n");
    }
}
