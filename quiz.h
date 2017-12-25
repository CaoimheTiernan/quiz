#include <stdio.h>
#include <ctype.h>
#define ANS_SIZE 2

// This program will run a quiz. It will ask questions, check if the user gave the right answer and show a score board.
int IsCorrect(char answer[], char solution[]);

int main(void){

int score = 0;
int hold;
char answer[ANS_SIZE];
char solution[ANS_SIZE];
char name[4] = ">>>";
int i = 0;


printf("Please Enter a three letter name: \n");

do {
       name[i] = getchar();      // this gets three characters to form a username
       i++;
    }

while(i < 3);


 printf("This is a True/False quiz. Please answer T or F to each question \n");



printf("Christmas is on the 24th of December: T/F \n"); // Question 1
scanf("%1s",&answer[0]); // Gets answer from user
solution[0] = 'F'; // solution to question 1


if (IsCorrect(answer, solution) > 0) score += 10; // increases user score if question is answered correctly


printf("The national colour of Ireland is Green: T/F \n"); // Question 2
scanf("%1s",&answer[0]); // Gets answer from user
solution[0] = 'F';

if (IsCorrect(answer, solution) > 0) score += 10;


printf("UCD computer science is located in Bellfield: T/F \n"); // Question 3
scanf("%1s",&answer[0]); // Gets answer from user
solution[0] = 'T';

if (IsCorrect(answer, solution) > 0) score += 10;

printf("The Republic of Ireland is a memeber of the EU: T/F \n"); // Question 4
scanf("%1s",&answer[0]); // Gets answer from user
solution[0] = 'T';

if (IsCorrect(answer, solution) > 0) score += 10;

printf("My mom is the best T/F \n"); // Question 5
scanf("%1s",&answer[0]); // Gets answer from user
solution[0] = 'T';

if (IsCorrect(answer, solution) > 0) score += 10;



printf("%s your score is %d\n",name,score); // Tells user their score
printf("Enter K to escape\n");
scanf("%d",&hold); // debug stops the ide from closing as soon as program has run

return 0;
}

int IsCorrect(char answer[], char solution[])
{
    int count = 0;

    while(count < 1)
        {
            answer[count] = toupper(answer[count]); //changes the user entry to upper case
            count++;
        }

    if(answer[0] == solution[0]) //sees if given answer matches the solution
        {
            printf("Correct\n");
            return 1;
        }
    else
    {
        printf("Wrong\n");
        return 0;
    }

}
