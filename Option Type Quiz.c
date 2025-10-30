#include <stdio.h>
int main() {
    int score = 0;        // To count correct answers (+1 for correct)
    int wrong = 0;        // To count incorrect answers (-1 for wrong)
    char ans;             // To store user's answer

    printf(" SIMPLE C QUIZ \n");
    printf("Each correct answer = +1 point\n");
    printf("Each wrong answer = -1 point\n\n");

    // Question 1
    printf("Q1. What is the size of int in C?\n");
    printf("A. 2 bytes\nB. 4 bytes\nC. 8 bytes\nD. Depends on compiler\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf(" Wrong! Correct answer is B\n\n");
        wrong++;
    }
    printf("Q2. Which symbol is used to comment a single line in C?\n");
    printf("A. //\nB. /* */\nC. #\nD. --\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'A' || ans == 'a') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf(" Wrong! Correct answer is A\n\n");
        wrong++;
    }

    printf("Q3. Which header file is needed for printf()?\n");
    printf("A. stdlib.h\nB. math.h\nC. stdio.h\nD. string.h\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf(" Wrong! Correct answer is C\n\n");
        wrong++;
    }

    printf("Q4. What is the correct format specifier for a float value?\n");
    printf("A. %%d\nB. %%f\nC. %%c\nD. %%s\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n\n");
        wrong++;
    }

    // Final result
    printf("\n");
    printf("QUIZ COMPLETED!\n");
    printf("Correct Answers : %d\n", score);
    printf("Wrong Answers   : %d\n", wrong);
    printf("Final Score     : %d\n", score - wrong);
    printf("\n");

    if (score > wrong)
        printf("Great job! You passed the quiz!\n");
    else
        printf("Better luck next time!\n");

    return 0;
}
