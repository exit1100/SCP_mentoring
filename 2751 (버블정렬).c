#include<stdio.h>
#include<stdlib.h>

int main(){
	int N,i,j,tmp=0,cnt=1;
	
	scanf("%d",&N);
	int* ARRAY=(int*)malloc(sizeof(int)*N);
	
	for(i=0;i<N;i++)
		scanf("%d",ARRAY+i);
	
	for(i=0;i<N-cnt;cnt++){
		for(j=0;j<N-1;j++){
			if(ARRAY[j]>ARRAY[j+1]){
				tmp=ARRAY[j];
				ARRAY[j]=ARRAY[j+1];
				ARRAY[j+1]=tmp;
			}	
		}
	}
	
	for(i=0;i<N;i++)
		printf("%d\n",*(ARRAY+i));
		
	return 0;
}
