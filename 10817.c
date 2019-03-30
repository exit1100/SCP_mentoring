#include <stdio.h>

int main(){
	int A, B, C, second;
	
	scanf("%d %d %d",&A,&B,&C);
	if (A>B)
		if(A>C)
			if(B>C)
				second = B;
			else
				second = C;
		else
			second = A;
	else if (B>C)
		if (A>C)
			second = A;
		else
			second = C;
	else
		second = B;							
		
	printf("%d",second);
	return 0;
}
