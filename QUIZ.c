#include <stdio.h>
int main() {
    int score = 0;          // To count correct answers
    int incorrect = 0;      // To count incorrect answers
    int answer;             // To store user answer
    int total_Questions = 3; // Total number of quiz questions

    printf("Welcome to the Increment/Decrement (1 for True / 0 for False):Quiz!\n\n");

    printf("1) If x = 5, x++ will increase x by 1. True (1) / False (0): \n");
    scanf("%d", &answer);
    if(answer == 1) {
        score++; // correct, use increment
    } else {
        incorrect++;
    }

    printf("2) If y = 10, y-- will decrease y by 1. True (1) / False (0): \n\n");
    scanf("%d", &answer);
    if(answer == 1) {
        score++; // correct, use increment
    } else {
        incorrect++;
    }

    printf("3) If z = 7; --z sets z to 8. True (1) / False (0): \n\n");
    scanf("%d", &answer);
    if(answer == 0) { // correct answer is False
        score++;
    } else {
        incorrect++;
    }

    // Result
    printf("Quiz Over!\n");
    printf("Total Questions: %d\n", total_Questions);
    printf("Correct Answers: %d\n", score);
    printf("Incorrect Answers: %d\n", incorrect);

    return 0;
}
