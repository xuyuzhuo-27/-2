#include<stdio.h>
int a,b,c,max;
int main()
{
printf("������a,b,c\n");
 scanf("%d,%d,%d",&a,&b,&c);
 if(a>b)
  {if(a>c)
  max=a;
  else
  max=c;
  }
 else
 {
 if(b>c)
 max=b;
 else
 max=c;
 }
 printf("���ֵΪ%d\n",max);
 return 0;
} 
