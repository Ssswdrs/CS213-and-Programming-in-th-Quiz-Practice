#include<stdio.h>
#include<string.h>

void reverse(char Text[]);

int main(){
	char text[101];
	printf("Enter text to reverse: ");
	scanf("%s",text);
	reverse(text);
}
void reverse(char Text[]){
	char temp,i,j;
	int t=strlen(Text);
	char retext[t];
	for(j=0;j<3;j++){
			temp = Text[0];
		for(i=0;i<t;i++){
			Text[i] = Text[i+1];
			Text[t] = temp;
		}
	}
		
	for(i=0;i<t;i++){
		printf("%c",Text[i]);
	}
	
	return;
}
