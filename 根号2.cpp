#include<stdio.h>
int main()
{
	float a,b,c,target;//target为需开方数 
	scanf("%f",&target);
	a=0.0f,b=target,c=(a+b)/2;
	while(b-a>0.000001)
	{
		if(c*c<target)//猜测值过小 
		{
			a=c;
			c=(a+b)/2;
		}
		else//猜测值过大 
		{
			b=c;
			c=(a+b)/2;
		}
	}
	printf("开方结果:%.3f\n",c);
	return 0;
}
