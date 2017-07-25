#include<stdio.h> 
void main() 
{ 
int n,i=1,sum=0; 
printf("ENTER THE VALUE OF N"); 
scanf("%d",&n); 
printf("First %d numbers are\n",n); 
for(i=1;i<=n;i++) 
{ 
printf("%7d",i); 
sum=sum+i; 
} 
printf("\n\nSum = %d",sum); 
getch();
}
