#include<stdio.h>
#include<math.h>
int main() 
{int a,b,y;
printf("please enter two integers.\n");
scanf("%d %d",&a,&b);
a=pow(a,2),b=pow(b,2);
y=a+b;
printf("%d\n",y);
return 0;
}
