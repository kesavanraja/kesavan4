#include <stdio.h>
void main()
{
int n, reversedInteger = 0, remainder, originalInteger;
printf("Enter the number");
scanf("%d",&n);
originalInteger = n;
while(n!=0)
{
remainder=n%10;
reversedInteger = reversedInteger*10 + remainder;
n/=10;
}
if (originalInteger == reversedInteger)
{
printf("%d is a palindrome",originalInteger);
else
printf("%d is not a palindrome",originalInteger);
}
getch();
}
