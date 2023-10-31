#include<stdio.h>
#include<string.h>
int main(){
	int i,len;
	char input[16];
	scanf("%s", input);
	len = strlen(input);
	for(i=1;i<=len;i++){
		if(i%3==0)printf(".*..");
		else if(i==1)printf("..#..");
		else if(i%3!=0&&i!=1)printf(".#..");
	}
	printf("\n");
	for(i=1;i<=len;i++){
		if(i%3==0)printf("*.*.");
		else if(i==1)printf(".#.#.");
		else if(i%3!=0&&i!=1)printf("#.#.");
	}
	printf("\n");
	for(i=1;i<=len;i++){
		if(i%3==0)printf(".%c.*",input[i-1]);
		else if(i==1)printf("#.%c.#",input[i-1]);
		else if(i%3==1&&i!=1)printf(".%c.#",input[i-1]);
		else if(len==2,5,8,11,14&&i==len)printf(".%c.#",input[i-1]); 
		else if(i%3==2)printf(".%c.*",input[i-1]);
	}
	printf("\n");
	for(i=1;i<=len;i++){
		if(i%3==0)printf("*.*.");
		else if(i==1)printf(".#.#.");
		else if(i%3!=0&&i!=1)printf("#.#.");
	}
	printf("\n");
	for(i=1;i<=len;i++){
		if(i%3==0)printf(".*..");
		else if(i==1)printf("..#..");
		else if(i%3!=0&&i!=1)printf(".#..");
	}
	
	return 0;
}
