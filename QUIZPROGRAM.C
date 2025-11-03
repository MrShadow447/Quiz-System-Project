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
	getch();
	clrscr();

	//Question 2
	printf("Q2. What is the square root of 289?\n");
	printf("A. 13\nB. 23\nC. 19\nD. 17\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	getch();
	clrscr();

	//Question 3
	printf("Q3. Which of the following is a fruit?\n");
	printf("A. Carrit\nB. Potato\nC. Spinach\nD. Tomato\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	getch();
	clrscr();

	//Question 4
	printf("Q4. Which Planet is known as the Red Planet?\n");
	printf("A. Mars\nB. Venus\nC. Jupiter\nD. Mercury\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'A' || ans == 'a') score++;
	getch();
	clrscr();

	//Question 5
	printf("Q5. What is the smallest unit of data in a computer?\n");
	printf("A. Nibble\nB. Byte\nC. Megabyte\nD. Bit\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	getch();
	clrscr();

	//Question 6
	printf("Q6. What is the boiling point of water at sea level?\n");
	printf("A. 50%cC\nB. 75%cC\nC. 100%cC\nD. 150%cC\n", 248, 248, 248, 248);
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'C' || ans == 'c') score++;
	getch();
	clrscr();

	//Question 7
	printf("Q7. At what temperature is water the densest?\n");
	printf("A. 2%cC\nB. 4%cC\nC. 6%cC\nD. 10%cC\n", 248, 248, 248, 248);
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'B' || ans == 'b') score++;
	getch();
	clrscr();

	//Question 8
	printf("Q8. Sound travels fastest in-\n");
	printf("A. Steel\nB. Air\nC. Water\nD. Vaccum\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'A' || ans == 'a') score++;
	getch();
	clrscr();

	//Question 9
	printf("Q9. The force that opposes motion is called-\n");
	printf("A. Magnetism\nB. Gravity\nC. Inertia\nD. Friction\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'D' || ans == 'd') score++;
	getch();
	clrscr();

	//Question 10
	printf("Q10. Which animal is known as the 'Ship of the Desert'?\n");
	printf("A. Horse\nB. Elephant\nC. Camel\nD. Donkey\n");
	printf("Your Answer: ");
	ans = getche();
	if (ans == 'C' || ans == 'c') score++;
	getch();
	clrscr();

	//Result
	printf("=======QUIZ OVER=======\n\n");
	printf("Your Total Score is: %d / 10\n", score);

	//Outro
	if (score == 10) printf("Thats Great! Full Marks!\n");
	else if (score <= 10 && score >= 4) printf("Nice try.\n");
	else printf("Work Hard!.\n");

	//Exit
	printf("\nPress any key to exit.");

	getch();

	return 0;
}
