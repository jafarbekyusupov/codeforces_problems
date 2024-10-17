#include <stdio.h>
#include <string.h>

int main() {
    char user[101];
    int char_count[26] = {0};
    int dc = 0;
    scanf("%s", user);
    for (int i = 0; i < strlen(user); i++) {
        int index = user[i] - 'a';
        if (char_count[index] == 0) {
            char_count[index] = 1;
            dc++;
        }
    }
    printf("%s\n", (dc % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
