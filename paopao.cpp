#include <stdio.h>
int main(void)
{int a[5],i,j,t;
printf("请输入5个整数： \n");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
for(i=3;i>=0;i--)
{for(j=0;j<=i;j++)
if(a[j]<a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
printf("排序后的结果：\n");
for(i=0;i<=4;i++)
printf("%d", a[i]);
 return 0;
}
	

