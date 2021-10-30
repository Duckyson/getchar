#include<stdio.h>
#include<stdbool.h>
bool sushu(int n){
	int q = 2;
	for(;q*q<=n;q++){
		if(n%q==0)
			return false;
	}
	return true;
}/*判断数字是否为素数*/ 
//判断是否为超级素数 
int main(){
	int a,c[5],i,d,b[10000],m=0;
	double k=0.0f;
	for(a=100;a<=10000;a++){
	    if (!sushu(a))
	    continue;
	    d=a;
	    for(i=0;i<5;i++){
		    c[i]=d%10;
		    d=d/10;
	    }
	    int sum=0;
	    for(i=0;i<5;i++){
	    	sum+=c[i];
		}
		if (!sushu(sum))
	    continue;
	    for(i=0,sum=0;i<5;i++){
	    	sum+=c[i]*c[i];
		}
		if (!sushu(sum))
	    continue;
	    else 
	    b[m]=a;
	    m++;
	    printf("%d ",a);
	}
	for(int l=0;l<m;l++){
		k+=b[l];
	}
	printf("\n%f",k/m);
	return 0;
}
