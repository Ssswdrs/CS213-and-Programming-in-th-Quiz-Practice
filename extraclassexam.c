#include<stdio.h>

void inputNumber(int arr_num[]);
char inputCharacter();
void printRectangle(int arr_num[], char ch);

int main()
{
	char ch;
	int arr_num[2];
	inputNumber(arr_num);
	ch = inputCharacter();
	printRectangle(arr_num,ch);
	
	return 0;
}

void inputNumber(int arr_num[]){
	printf("Input Row: ");
	scanf("%d",&arr_num[0]);
	printf("Input Column: ");
	scanf("%d",&arr_num[1]);
}

char inputCharacter(){
	char c;
	printf("Input Character: ");
	scanf(" %c",&c);
	return c;
}

void printRectangle(int arr_num[], char ch){
	int i,j;
	printf("===\n");
	printf("Rectangle Size is %d*%d\n",arr_num[0],arr_num[1]);
	printf("===\n");
	for(i=0;i<arr_num[0];i++){
		for(j=0;j<arr_num[1];j++){
			printf("%c ",ch);
		}
		printf("\n");
	}
}
