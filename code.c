#include<stdio.h>
int main()
{
int x,s=0,a,p;
scanf("%d%d",&x,&p);
while(x!=1)
{
    s=s+x;
    a=(x*p)/100;
    x=x-a;
//printf("\n%d",x);
}
printf("%d",s+1);
printf("\n");
return 0;
}
