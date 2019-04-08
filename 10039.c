#include<stdio.h>

int main(){
	int score[5], sum=0, avg=0, i;
	for(i=0;i<5;i++){
		scanf("%d",&score[i]);
		if(score[i]<40){
			sum+=40;
			continue;
		}
		sum+=score[i];
	}
	avg=sum/5;
	printf("%d",avg);
	return 0;
	
}
