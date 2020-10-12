#include<stdio.h>
#include<conio.h>
struct student
{
    int num;
    int name[20];
    char city[20];
    float per;
};
int main()
{
    struct student std1,std2;

    std1.num=14;
    strcpy(std1.name,"prasad thorat");
    strcpy(std1.city,"karad");
    std1.per=654897;

    printf("\n 1st student details are => \n\n\t Roll No-%d.\n\tName-%d.\n\tCity-%s.\n\tMobile No-%f",std1.num,std1.name,std1.city,std1.per);

    getch();
    return 0;
}
