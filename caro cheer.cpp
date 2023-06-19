#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOARD_SIZE 15
#define EMPTY '-'
#define PLAYER_1 'X'
#define PLAYER_2 'O'

char board[BOARD_SIZE][BOARD_SIZE];

int is_win(char player) {
    int i, j, k;

    // check horizontal
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j <= BOARD_SIZE - 5; j++) {
            for (k = 0; k < 5; k++) {
                if (board[i][j+k] != player) break;
            }
            if (k == 5) return 1;
        }
    }

    // check vertical
    for (i = 0; i <= BOARD_SIZE - 5; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            for (k = 0; k < 5; k++) {
                if (board[i+k][j] != player) break;
            }
            if (k == 5) return 1;
        }
    }

    // check diagonal (top-left to bottom-right)
    for (i = 0; i <= BOARD_SIZE - 5; i++) {
        for (j = 0; j <= BOARD_SIZE - 5; j++) {
            for (k = 0; k < 5; k++) {
                if (board[i+k][j+k] != player) break;
            }
            if (k == 5) return 1;
        }
    }

    // check diagonal (bottom-left to top-right)
    for (i = 4; i < BOARD_SIZE; i++) {
        for (j = 0; j <= BOARD_SIZE - 5; j++) {
            for (k = 0; k < 5; k++) {
                if (board[i-k][j+k] != player) break;
            }
            if (k == 5) return 1;
        }
    }

    return 0;
}

void print_board() {
    int i, j;

    printf("  ");
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
    }
    printf("\n");

    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%2d", i);
        for (j = 0; j < BOARD_SIZE; j++) {
            printf(" %c", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j, row, col, player = 1;

    // initialize board
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }

    // play game
    while (1) {
        // print board
        print_board();

        // get input
        printf("Player %d, enter row and column: ", player);
        scanf("%d %d", &row, &col);

        // check if valid move
        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
            printf("Invalid move! Try again.\n");
            continue;
        }
    }}

