#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool sushu(int n){
	int i;
	if(n==2||n==3){
	return true;
	}
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	unsigned int Y;
	unsigned int p=1,q=1;
	long long unsigned int a,b;
    for(Y=2;Y<=100000;Y++) {
    	if(sushu(Y)==true){
    		for(p=1;p<=15;p++){
    			for(q=1;q<=15;q++){
    				if(Y==pow(p,q)+pow(q,p)&&sushu(p)==true&&sushu(q)==true)
    				printf("%d %-3d",p,q);
    				else continue;
				}
			}
		}
	}
	return 0;
}
