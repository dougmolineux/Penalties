#include<stdio.h>

int main() {

	
	char playerName[40];

	// set up random number
	srand((unsigned)time(NULL));
	int r = rand()%100;

	int gkr = rand()%100;

	system("clear");
	printf("Welcome to Penalties v0.1\n\nEnter Player Name: ");
	scanf("%s", playerName);

	printf("\n%s, Your Shooting ability is %d", playerName, r);
	
	if(r > gkr) {

		printf("\nYou scored against a goalkeeper, whose saving ability is: %d", gkr);

	}
	else {

		printf("\nYou missed your shot, the goalkeeper's ability was %d", gkr);

	}

	// close out by making 2 new lines
	printf("\n\n");

	return;

}
