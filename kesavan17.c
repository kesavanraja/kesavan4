#include <stdio.h>
void main()
{
int base,exp;
long long result = 1;
printf("Enter the base number");
scanf("%d",&base);
printf("Enter an exponent");
scanf("%d", &exp);
while(exponent!=0)
{
result*=base;
--exp;
}
printf("Answer=%lld",result);
getch();
}
