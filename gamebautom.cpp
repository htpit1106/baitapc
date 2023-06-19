#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int money = 1000;
  int bet = 0;
  int guess;
  int dice1, dice2, dice3;
  char choice;

  srand(time(0));

  printf("*********** WELCOME TO BAU TOM CUA CA ***********\n");
  printf("Starting money: $%d\n", money);

  while (money > 0) {
    printf("Place your bet: ");
    scanf("%d", &bet);

    if (bet > money) {
      printf("You don't have enough money to make that bet.\n");
      continue;
    }

    printf("Predict the dice combination (1 - TOM, 2 - CA, 3 - CUA, 4 - GA, 5 - NAI, 6 - HUOU): ");
    scanf("%d", &guess);

    if (guess < 1 || guess > 6) {
      printf("Invalid guess. Please try again.\n");
      continue;
    }

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    dice3 = rand() % 6 + 1;

    printf("The result is: %d %d %d\n", dice1, dice2, dice3);

    if ((dice1 == guess) || (dice2 == guess) || (dice3 == guess)) {
      money += bet;
      printf("Congratulations! You win $%d. Your total money is now $%d.\n", bet, money);
    } else {
      money -= bet;
      printf("Sorry, you lose. Your total money is now $%d.\n", money);
    }

    if (money <= 0) {
      printf("You have no more money to play.\n");
      break;
    }

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'n') {
      break;
    }
  }

  printf("Thank you for playing!\n");

  return 0;
}

