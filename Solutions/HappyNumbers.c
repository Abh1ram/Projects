#include <stdio.h>

int happyNum(int n)
{
int i,ht[260],sum;

for(i=0;i<260;i++)
ht[i]=-1;

int a=n;
while(1)
{

if(a<259)
{
if(a==1)
return 1;

if(ht[a]==a)
return 0;

ht[a]=a;
}
sum=0;
while(a>0)
{
sum+=(a%10)*(a%10);
a/=10;
}
a=sum;

}


}


int main()
{
printf("Enter number to check if it is happy number: ");
int n;
scanf("%d",&n);

if(happyNum(n))
printf("Happy number :)  ");
return 0;
}


