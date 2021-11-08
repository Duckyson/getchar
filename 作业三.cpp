#include<stdio.h>
int main(){
	int n,l,m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(m=i;m>0;){
			if(m%10==1){
				l++;
			}
			m=m/10;
		}
	}
	printf("f(%d)жага%dИі1",n,l);
	return 0;
} 
