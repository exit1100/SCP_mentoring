#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,i,j,tmp=0;
	
	scanf("%d",&N);
	int* ARRAY=(int*)malloc(sizeof(int)*N);
	
	for(i=0;i<N;i++)
		scanf("%d",ARRAY+i);
	
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(ARRAY[j]<=ARRAY[i]){
				tmp=ARRAY[i];
				ARRAY[i]=ARRAY[j];
				ARRAY[j]=tmp;
			}
		}
	}
	
	for(i=0;i<N;i++)
		printf("%d\n",*(ARRAY+i));
		
	return 0;
}
