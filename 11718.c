#include<stdio.h>

int main(){
	
	char input[101];
	int count=1;
	
	while(gets(input) && count<=100 ){
		if (input[0]==NULL)
			break;
		puts(input);	
		count += 1;
	}
	return 0;
}
