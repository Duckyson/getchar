#include<stdio.h>
int main()
{
	float a,b,c,target;//targetΪ�迪���� 
	scanf("%f",&target);
	a=0.0f,b=target,c=(a+b)/2;
	while(b-a>0.000001)
	{
		if(c*c<target)//�²�ֵ��С 
		{
			a=c;
			c=(a+b)/2;
		}
		else//�²�ֵ���� 
		{
			b=c;
			c=(a+b)/2;
		}
	}
	printf("�������:%.3f\n",c);
	return 0;
}
