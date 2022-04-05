/*Write a program to create structure of 5 student marksheet.
Date : 24-02-2022
Name : Abhishek Jeswal*/
#include<stdio.h>
#include<conio.h>
struct Marksheet
{
	int id,sub1,sub2,sub3,total,per;
	char name[5][50];
}s[5];
void main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		clrscr();
		printf("Enter details of %d student:\n_______________________________________\n",i);
		printf("S_Id : ");
		scanf("%d",&s[i].id);
		printf("S_Name : ");
		flushall();
		scanf("%s",&s[i].name);
		printf("marks of sub1 : ");
		scanf("%d",&s[i].sub1);
		printf("marks of sub2 : ");
		scanf("%d",&s[i].sub2);
		printf("marks of sub3 : ");
		scanf("%d",&s[i].sub3);
		s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
		s[i].per=s[i].total/3;
	}
	clrscr();
	printf("\nS.id \t S.name\tsub1\tsub2\tsub3\ttotal\tper\n__________________________________________________________________\n");
	for(i=1;i<=5;i++)
		printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\n",s[i].id,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].total,s[i].per);
	getch();
}
