#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int guess,random,count=0;
	srand(time(NULL));
	printf("\n\n\n");
	printf("*******************************************************************************************************************************************************************");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t Welcome to my game The world of Guessing\n");
	printf("\n");
	printf("*******************************************************************************************************************************************************************");
    printf("\n");
	random=rand()%100+1;
	
	do{
		printf("\nPlease enter the guess number between (1 to 100):");
		scanf("%d",&guess);
		count++;
		
	 if (guess<random)
	printf("Guess a larger number.\n");
	else if(random<guess)	
		printf("Guess a smaller number.\n");
	else
	printf("Congratulation !!!You have guess the number successfully in %d attempts",count);

	}while(random!=guess);
	
	printf("\n Thanks for Playing.");
	printf("\nDeveloped by Jass   coding");
	
	return 0;
}