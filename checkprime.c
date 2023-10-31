#include<stdio.h>
int main(){
	int i,k=0,j,a=0,b,c=0;
	printf("Input Number : ");
	scanf("%d",&i);
		for(j=1;j<=i;j++)if(i%j==0)k+=1;
		if(k==2)printf("%d is Prime Number", i);
		else printf("%d is not Prime Number", i);
	}
