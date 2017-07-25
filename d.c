
#include<stdio.h>
#include<string.h>

void main() {
  int n,i;
  char a[30],b[30],c[30],d[30];
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

