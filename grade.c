#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	
	if(score >= 68){
		if (score >= 85){
			printf("A");
		}
		else if(score >= 75){
			printf("B\n%d to A",85-score);
		}
		else if(score >= 68){
			printf("C\n%d to B",75-score);
		}
	}else{
		if (score >= 55){
			printf("D\n%d to C",68-score);
		}
		else {
			printf("F\n%d to D",55-score);
		}
	}
	return 0;
}
