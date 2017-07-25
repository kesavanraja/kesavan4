#include<stdio.h>
void main()
{
char nm[20];
int i,n;
printf("Enter the word\n");
gets(nm);
printf("How many time\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%3d\t%s\n",i,nm);
}
getch();
}
