//True or False Quiz Game based on different car motors//
//preprocessors//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "QuizQuestions.h"

struct question; 
const int MAX = 10;
struct login; //File i/o and security of code login
{ // THE BLOCK OF CODE REGARDING THE FILE I/O AND SECURITY IS REFERENCED FROM PROFESSOR JACKSON! 
	char firstname[50]; //characters that hold the inputted answers
	char lastname[50];
	char username[50];
	char password[50];
};
void login(void);
void registration(void);

int main() //integer main
{
	int option;

	printf("Press '7' to Register\nPress '9' to Login\n\n"); //prompts the user to either register or login
	scanf("%d", &option);

	getchar();

	if (option == 7) // if statement choosing register 
	{
		system("CLS");
		registration();
	}

	else if (option == 9) // if else statement choosing login
	{
		system("CLS");
		login();
	}
}
void login(void) //regards of login
{
	char username[50], password[50];
	FILE* log;

	log = fopen("yourlogin.txt", "r"); //opens login text
	if (log == NULL)
	{
		fputs("Error opening the File!", stderr); // throws an error opening the file
		exit(7);
	}

	struct login j; // must use "j"
	// prompts the user to enter username and password
	printf("\nPlease Enter your login certification below\n\n");
	printf("Username:  ");
	fgets(username, 50, stdin);
	printf("\nPassword: ");
	printf("\n");
	fgets(password, 50, stdin);
	//while if else statement if the login is approved or rejected
	while (fread(&j, sizeof(j), 7, log))
	{
		if (strcmp(username, j.username) == 0 && strcmp(password, j.password) == 0)

		{
			printf("\nLogin Approved\n");
		}
		else
		{
			printf("\nLogin Details Reejected \nPlease enter the correct certification\n");
		}
	}
	fclose(log);
}
void registration(void) //in regards to registration
{
	char firstname[50];
	FILE* log;

	log = fopen("yourlogin.txt", "W");
	if (log == NULL)
	{
		fputs("Error opening the FILE!", stderr);
		exit(7);
	}

	struct login j;
	//prompts user to register with first and last name
	printf("\nWelcome to the quiz. We need to enter the correct information for registration.\n\n");
	printf("\nEnter First Name:\n");
	scanf("%c", j.firstname);
	printf("\nEnter Last name:\n");
	scanf("%s", j.lastname);
	// prints the user must have certain qualifications to create a certain password
	printf("Great, Thank you.\nNow please create a username and password as a certification for the system login.\nBe sure the username is less than 15 characters long.\nBe sure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n");

	// print statement regarding entering created username and password
	printf("\nInput Username:\n");
	scanf("%s", j.username);
	printf("\nInput Password:\n");
	scanf("%s", j.password);

	fwrite(&j, sizeof(j), 7, log);
	fclose(log);
	// confirmation of registration
	printf("\nConfirming information...\n...\nWelcome, %s!\n\n", firstname);
	printf("\nYour Registration is Successful!\n");
	printf("Press any key to continue...");
	getchar();
	system("CLS");
	login();
}
{
	//local variable definition
	int a = true;
	int b = false;
	char str[500]; //character string set to 500
	printf(PROMPT_INTRO); //display a goodluck message before continuing
	gets(str); //allows user to enter th given amount of characters after the enter key

	//ask questions 
	if (a = true) { //if statement 
		char str[500]; //character string set to 500
		printf(PROMPT_QUESTION1A); //print the answer given 
		gets(str); //allows user to enter th given amount of characters after the enter key
	}
	else { //else statement
		char str[500]; //character string set to 500 
		printf(PROMPT_QUESTION1B); //print the false statement 
		puts(str); //prints the string which was read by gets(str)
	}

	printf("correct answer is: %d\n", a); // the correct answer is a (true)
	//FROM HERE UNTIL LINE 155 IS A REPETITIVE CODE OF ENTERING TRUE OR FALSE
	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION2A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION2B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION3A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION3B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION4A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION4B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION5A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION5B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", a);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION6A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION6B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION7A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION7B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION8A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION8B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION9A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION9B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	if (a = true) {
		char str[500];
		printf(PROMPT_QUESTION10A);
		gets(str);
	}
	else {
		char str[500];
		printf(PROMPT_QUESTION10B);
		printf("\n");
		puts(str);
	}

	printf("correct answer is: %d\n", b);

	printf(PROMPT_OUTRO); //display congratulations 
	char* answers[] = //character answers
	{
		"True", //answer key
		"True",
		"True",
		"True",
		"True",
		"False",
		"False",
		"False",
		"False",
		"False"
	};
	int i = 0;
	for (i = 0; i < MAX; i++) //use of pointer
	{
		printf("Answer Key[%d] = %s\n", i, answers[i]); //display the list 
	}
	struct question
	{
		int TrueAnswers;
		int FalseAnswers;
	};
	{
		struct question questions = { 5, 5 };
		printf("true: %d false: %d\n", questions.TrueAnswers, questions.FalseAnswers);
	}
	return 0; //return, the end
}