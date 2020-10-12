#include<stdio.h>
#include<conio.h>
struct student
{
    int num;
    char name[20];
    char city[20];
    float per;
};
int main()
{
    struct student std1,std2;

    std1.num=14;
    strcpy(std1.name,"prasad");
    strcpy(std1.city,"karad");
    std1.per=65.4897;

    printf("\n Enter a num =");
    scanf("%d",&std2.num);

    printf("\n Enter a name =");
    scanf("%s",&std2.name);

     printf("\n Enter a city name =");
    scanf("%s",&std2.city);

     printf("\n Enter a Percentage =");
    scanf("%f",&std2.per);

    getch();
    printf("\n 1st student details are => \n\n\t Roll No-%d.\n\tName-%s.\n\tCity-%s.\n\tMobile No-%f",std1.num,std1.name,std1.city,std1.per);
    getch();
    printf("\n 2st student details are => \n\n\t Roll No-%d.\n\tName-%s.\n\tCity-%s.\n\tMobile No-%f",std2.num,std2.name,std2.city,std2.per);

    getch();
    return 0;
}
