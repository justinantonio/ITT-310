//True or False Quiz Game based on different car motors//
//preprocessors//
#include <stdio.h>
#include <stdbool.h>

int main() //integer main
{

	//local variable definition
	int a = true;
	int b = false;

	char str[500]; //character string set to 500
	printf("WELCOME, I HOPE YOU KNOW YOUR ENGINES... I WISH YOU THE BEST OF LUCK! "); //display a goodluck message before continuing
	gets(str); //allows user to enter th given amount of characters after the enter key

	//ask questions 
	if (a = true) { //if statement 
		char str[500]; //character string set to 500
		printf("nissan GTR R34 has an RB26 motor: "); //print the answer given 
		gets(str); //allows user to enter th given amount of characters after the enter key
	}
	else { //else statement
		char str[500]; //character string set to 500 
		printf("nisaan GTR R34 does not have an RB26 motor\n"); //print the false statement 
		puts(str); //prints the string which was read by gets(str)
	}

	printf("correct answer is: %d\n", a); // the correct answer is a (true)
	//FROM HERE UNTIL LINE 155 IS A REPETITIVE CODE OF ENTERING TRUE OR FALSE
	if (a = true) {
		char str[500];
		printf("toyota MK4 supra has a 2JZ-GTE motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("toyota MK4 supra does not have a 2JZ-GTE motor: ");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf("nissan R35 GTR has a VR38DETT motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("nissan R35 GTR does not have a VR38DETT motor ");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf("mazda RX7 has a rotary engine: ");
		gets(str);
	}
	else {
		char str[500];
		printf("mazda RX7 does not have a rotary engine ");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf("nissan S15 silvia has a SR20DET motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("nissan S15 silvia does not have a SR20DET motor ");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf("nissan 350z does have a v8 motor stock: ");
		gets(str);
	}
	else {
		char str[500];
		printf("nissan 350z does not have a v8 motor stock");
		printf("\n");
		puts(str);
	}
	
	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf("mitsubishi evo VIII has a vq35 motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("mitsubishi evo VIII does not have a VQ motor");
		printf("\n");
		puts(str);
	}
	
	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf("subaru STI has a 1JZ-GTE motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("subaru STI does not have a 1JZ-GTE motor");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf("Mercedes C63 AMG has a SR20DET motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("Mercedes C63 AMG does not have a SR20DET motor");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf("lamborghini huracan has a F136 motor: ");
		gets(str);
	}
	else {
		char str[500];
		printf("lamborghini huracan does not have a F136 motor");
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	printf("CONGRATULATIONS YOU HAVE FINISHED THIS QUIZ"); //display congratulations 

	return 0; //return, the end
}