#include<stdio.h>
#include<conio.h>
#define sda 3
struct customer
{
    int cust_ID;
    char name[20];
    char product[20];
    float prise;
};
int main()
{
    int i=0;

    struct customer std[sda];

    printf("\n *-*-*-*-*-*-*-*-Accepting Details customer -*-*-*-*-*-*-*-\n");
    for(i=0;i<sda;i++)
    {
        printf("\n Enter a %d customer details =",i+1);
        printf("\n Enter a customer id =");
        scanf("%d",&std[i].cust_ID);
        printf("\n Enter a customer name =");
        scanf(" %[^\n]",&std[i].name);
        fflush(stdin);
        printf("\n Enter a customer product name =");
        scanf("%[^\n]",&std[i].product);
        fflush(stdin);
        printf("\n Enter a customer product prise =");
        scanf("%f",&std[i].prise);
    }
     getch();
    printf("\n *-*-*-*-*-*-*-*-*-*Display product Details*-*-*-*-*-*-*-*-*-*-*-*\n");

    for(i=0;i<sda;i++)
    {
        printf("\n\n Display %d customer Details => \n\n Customer ID =%d \n customer name =%s \n customer product name =%s \n Customer product name =%0.2f",i+1,std[i].cust_ID,std[i].name,std[i].product,std[i].prise);
    }
    getch();
    return 0;
}
