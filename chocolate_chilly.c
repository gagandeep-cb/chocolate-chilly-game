#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=================== Chocolate Chilly Game ========================\n");

    int total_chocolates;
    int collect;
    int player = 1;

    total_chocolates = rand() % 20 + 10;

    printf("Total chocolates = %d\n", total_chocolates);

    while (total_chocolates > 0)
    {
        printf("\nPlayer %d turn\n", player);
        printf("Enter chocolates (1 to 3): ");
        scanf("%d", &collect);

        if (collect < 1 || collect > 3)
        {
            printf("Invalid input! Choose between 1 and 3.\n");
            continue;
        }

        total_chocolates = total_chocolates - collect;

        printf("Remaining chocolates = %d\n", total_chocolates);

        if (total_chocolates == 0)
        {
            printf("Player %d gets Chilly 🌶️\n", player);

            if (player == 1)
                printf("Player 2 wins 🍫\n");
            else
                printf("Player 1 wins 🍫\n");

            break;
        }

        // Switch player
        if (player == 1)
            player = 2;
        else
            player = 1;
    }

    return 0;
}