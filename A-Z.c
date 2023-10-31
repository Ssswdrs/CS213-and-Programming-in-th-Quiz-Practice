#include<stdio.h>
//A-Z and a-z program
int main(){
	int i,j=90,k;
	for(i=65;i<=j;i++){
		printf("%c ", i+32);
		if(i==90){
			printf("\n");
			i=96;
			j=122;
		}
	}
}

