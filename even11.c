
#include<stdio.h>
#include<string.h>

int main() {
  int n,i;
  char a[20],b[20],c[20],d[20];
  gets(a);
  gets(b);
  gets(d);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
      if(a[i]==b[i])
      {
        c[i]=a[i];
      }else
      {
          break;
      }
  }for(i=0;i<n;i++)
  {
      if(c[i]==d[i])
      {
          printf("%c",c[i]);
      }else
      {
          break;
      }
  }
    
}

