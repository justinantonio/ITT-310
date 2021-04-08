//True or False Quiz Game based on different car motors//
//preprocessors//
#include <stdio.h>
#include <stdbool.h>
#include "QuizQuestions.h"
struct question;
const int MAX = 10;
int main() //integer main
{

	//local variable definition
	int TrueAnswers;
	int FalseAnswers;
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