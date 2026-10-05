#include<stdio.h>
int main(){
int n,a,sum=0,m;
scanf("%d",&n);
m=n;
while(n!=0)
{
 a=n%10;
 n=n/10;
 sum=sum*10+a;
}
if(m==sum)
printf("Palindromic");
else
printf("Not Palindromic");
}
