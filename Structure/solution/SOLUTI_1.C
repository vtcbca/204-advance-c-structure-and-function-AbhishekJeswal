/*Write a program to create inventory and insert 3 inventory detail.
Date : 30-03-2022 
Name : Abhishek Jeswal*/
#include<stdio.h>
#include<conio.h>
struct inventory
{
	int id,qty,rate,net;
	char name[3][50];
}i[3];
void main()
{
	int j;
	for(j=1;j<=3;j++)
	{
			clrscr();
			printf("--------------------------------------------------------------------------------\n");
			printf("\t\t\t\tEbter %d INVENTORY Details:\n",j);
			printf("--------------------------------------------------------------------------------\n");
			printf("I_Id : ");
			scanf("%d",&i[j].id);
			printf("I_Name : ");
			flushall();
			scanf("%s",&i[j].name);
			printf("Quantity : ");
			scanf("%d",&i[j].qty);
			printf("Rate(per item): ");
			scanf("%d",&i[j].rate);
			(i[j].net=i[j].qty*i[j].rate);
	}
	clrscr();
	printf("__________________________________________________________________\n");
	printf("\nI.id \t I.name\t Quantity(kg)\t Rate/kg\t Net Amount\n");
	printf("__________________________________________________________________\n");
	for(j=1;j<=3;j++)
		printf("%d\t%s\t %d\t\t %d\t\t %d\n",i[j].id,i[j].name,i[j].qty,i[j].rate,i[j].net);
	getch();
}
