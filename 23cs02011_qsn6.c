#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canFormWord(char arr[], int n, char word[]) {
    int count[256] = {0}; // Initialize count of all characters to 0

    // Count occurrences of each character in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Check if the word can be formed
    for (int i = 0; i < strlen(word); i++) {
        
        if (count[word[i]] == 0) {
            return false;
        }
        count[word[i]]--;
    }

    return true;
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int n = sizeof(arr);
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    if (canFormWord(arr, n, word)) {
        printf("The word '%s' can be formed from the characters in the array.\n", word);
    } else {
        printf("The word '%s' cannot be formed from the characters in the array.\n", word);
    }

    return 0;
}
