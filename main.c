#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomPasswordGeneration(int N) {
    const char numbers[] = "0123456789";
    const char lowerLetters[] = "abcdefghijklmnopqrstuvwxyz";
    const char upperLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char symbols[] = "!@#$^&*?";

    srand((unsigned int)(time(NULL)));

    for (int i = 0; i < N; i++) {
        int randomizer = rand() % 4;

        switch (randomizer) {
            case 0:
                printf("%c", numbers[rand() % 10]);
                break;
            case 1:
                printf("%c", symbols[rand() % 8]);
                break;
            case 2:
                printf("%c", upperLetters[rand() % 26]);
                break;
            case 3:
                printf("%c", lowerLetters[rand() % 26]);
                break;
        }
    }

    printf("\n");
}

int main() {
    // Password length
    int N;
    printf("Enter password length: ");
    scanf("%d", &N);

    // Function Call
    randomPasswordGeneration(N);
    
    return 0;
}
