#include<stdio.h>
#include<conio.h>
int main(void)
{
	int RECO, AGE, HEIGHT, CC, answer;
	
do{
	printf("\nWelcome! Are you recommended by the Jedi Master Obi Wan? (Type 1 for YES and 0 for  NO)\n");
	scanf("%d",&RECO);
	if(RECO==1)
	{
		printf("Congratulations! You are automatically accepted!");
	}
	else if (RECO==0)
	{
		printf("How old are you?\n");
		scanf("%d",&AGE);
		printf("How tall are you? (enter height in CM)\n");
		scanf("%d",&HEIGHT);
		printf("Enter your Citizenship Code: (Enter 1 for citizens and 0 for not citizens)\n");
		scanf("%d",&CC);
		if (CC > 1 || CC < 0){
			printf("Invalid.");
			getch;
		}
		else if(AGE>=21 && AGE<=25 && HEIGHT>=200 && CC==1){
			printf("Congratulations! You are now accepted!");
		}
		else
		{
			printf("Sorry, you are rejected.");
		}
	}
    else {
		printf("Invalid.");
	}
	printf("\nDo you wanna submit another response? (1-YES | 0-NO)");
	scanf("%d", &answer);
	
} while(answer == 1);

	return 0;
	
}
