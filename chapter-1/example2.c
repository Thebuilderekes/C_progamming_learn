#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int card;
  puts("Enter card number: ");
  scanf("%d", &card);
  if (card > 1)
    card = card - 1;
    if (card < 7)
    puts("Small card");
  else {
    puts("Ace!");
  }
  return 0;

}
