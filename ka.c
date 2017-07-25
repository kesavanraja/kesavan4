include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[]={2,3,4,5,6};
int b[]={2,3,4,5,6};
int c[5];
int count=0;

void swap(){
    int i,j,tmp;
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
            if(prime(a[i],a[j])&&position(i,j)){
    if(a[i]>a[j]){
        tmp=a[i];
        a[i]=a[j];
        a[i]=tmp;
        count++;
    }
    }
    }
    }
    printf("\n\nswapstart\n\n");
    for(i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    printf("\n\nswapover\n\n");
}

int prime(int a, int b){
int c=a+b;
if(c==3||c==5||c==6||c==2||c==4){
    return 1;
}
return 0;
}

int position(int a, int b){
if((a-b==2||b-a==4||a-b==3||b-a==5||a-b==6) && (!((a==2&&b==3)||(a==3&&b==2)||(a==5&&b==6)||(a==6&&b==5)(a==2&&b==4||a==4&&b==2)))
    return 1;
else
    return 0;
}

int main()
{
    int i,j,temp,cnd=0,m,times=1000,finalcount=10000000;

    srand(time(NULL));

   for(m=0;m<5;m++){
            c[m]=a[m];
        }
while(times--){

   for(m=0;m<5;m++){
            if(a[m]==b[m]){
               cnd=1;
               }
                else{
                    cnd=0;
                    break;
                }
        }
   while(cnd==0){

    i=rand()%5;
    j=rand()%5;

    if(prime(a[i],a[j])&&position(i,j)){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        count++;

        for(m=0;m<5;m++){
            if(a[m]==b[m]){
               cnd=1;
               }
                else{
                    cnd=0;
                    break;
                }
        }
    }
   }

for(m=0;m<5;m++){
    printf("%d ", a[m]);
    a[m]=c[m];
}
if(count<finalcount){
    finalcount=count;
}
printf("remaining = %d count= %d, finalcount= %d\n", times, count, finalcount);
count=0;
cnd=0;
}
    return 0;
}
