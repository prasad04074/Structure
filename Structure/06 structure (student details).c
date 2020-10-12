#include<stdio.h>
#include<conio.h>
#define sda 2
struct student
{
    int stud_Roll;
    char name[20];
    int Age;
    char city[20];
};
int main()
{
    int i=0;

    struct student std[sda];

    printf("\n *-*-*-*-*-*-*-*-Accepting Details student-*-*-*-*-*-*-*-\n");
    for(i=0;i<sda;i++)
    {
        printf("\n Enter a %d student details ",i+1);
        printf("\n Enter a student roll number =");
        scanf("%d",&std[i].stud_Roll);
        printf("\n Enter a student name =");
        scanf(" %[^\n]",&std[i].name);
        fflush(stdin);
        printf("\n Enter a student city name =");
        scanf(" %[^\n]",&std[i].city);
        fflush(stdin);
        printf("\n Enter a student Age =");
        scanf("%d",&std[i].Age);
    }
     getch();
    printf("\n *-*-*-*-*-*-*-*-*-*Display student Details*-*-*-*-*-*-*-*-*-*-*-*\n");

    for(i=0;i<sda;i++)
    {
        printf("\n\n Display %d student Details => \n\n student ID =%d \n student name =%s \n student city name =%s \n student Age =%d ",i+1,std[i].stud_Roll,std[i].name,std[i].city,std[i].Age);
    }
    getch();
    return 0;
}
