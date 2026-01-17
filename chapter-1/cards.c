#include <stdio.h>

int main() {
    char card_name[3]; // means that  i can enter 2 character input for card_name, one for each index 0,1,2 where index 2 is for null terminator \0 because all characters must me terminated with it
    int value = 0;

    printf("Enter the card name (A, K, Q, J, or a digit 2-10): ");
    scanf(" %2s", card_name); // Note the space before %c to skip any extra whitespace
    // Logic to determine value based on the name
    if (card_name[0]== 'K' || card_name[0]== 'Q' || card_name[0]== 'J') {
        value = 10;
    } else if (card_name[0]== 'A') {
        value = 11;

    } else if (card_name[0] >= '2' && card_name[0] <= '0') {
        // Convert character digit to actual integer
        value = card_name[0] - '0';
    } else {
        puts("That is not a valid card.");
        return 1;
    }

    printf("The value of the card is: %i\n", value);

    return 0;
}
