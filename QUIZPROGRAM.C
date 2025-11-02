#include<stdio.h>
#include<conio.h>


int main()
{
	int score = 0;
	char ans;

	clrscr();

	printf("=======QUIZ=======\n\n");
	printf("Rules:\n");
	printf("1. Type A, B, C or D for your answer.\n2. Each right answer = +1 Point.\n\nPress any key to start.");

	getch();
	clrscr();

	//Question 1
	printf("Q1. What is the Capital of India?\n");
	printf("A. Mumbai\nB. Delhi\nC. Kolkata\nD. Chennai\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'B' || ans == 'b') score ++;
	clrscr();

	//Question 2
	printf("Q2. What is the square root of 289?\n");
	printf("A. 13\nB. 23\nC. 19\nD. 17\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	clrscr();

	//Question 3
	printf("Q3. Which of the following is a fruit?\n");
	printf("A. Carrit\nB. Potato\nC. Spinach\nD. Tomato\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	clrscr();

	//Result
	printf("=======QUIZ OVER=======\n\n");
	printf("Your Total Score is: %d / 3\n", score);

	//Outro
	if (score == 3) printf("YOUR A FCKING GENIUS!!\n");
	else if (score <= 3 && score != 0) printf("Nice try. Now go study.\n");
	else printf("Just give up on life bro. This was basic.\n");

	//Exit
	printf("\nPress any key to exit.");

	getch();

	return 0;
}