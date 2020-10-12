#include<stdio.h>
#include<conio.h>
struct student
{
    int number;
    char name[20];
    char city[10];
    float per;
};
int main()
{
    int i=0;
    struct student std[3];

    for(i=0;i<3;i++)
    {
        printf("\n Enter a %d student information.",i+1);
        printf("\n Enter a student roll number = ");
        scanf("%d",&std[i].number);

        printf("\n Enter a student name number = ");
        scanf(" %[^\n]",&std[i].name);
        fflush(stdin);

        printf("\n Enter a student city number = ");
        scanf("%[^\n]",&std[i].city);
        fflush(stdin);

        printf("\n Enter a student persentage number = ");
        scanf("%f",&std[i].per);
    }
    printf("\n Display student details =*=\n");
    getch();
    for(i=0;i<3;i++)
    {
          printf("\n %d student details are => \n\n\t Roll No-%d.\n\tName-%s.\n\tCity-%s.\n\tMobile No-%0.2f",i+1,std[i].number,std[i].name,std[i].city,std[i].per);
    }
    getch();
    return 0;
}
