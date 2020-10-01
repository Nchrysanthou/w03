//==============================================
// Name:           Nicholas
// Id:             161264197
// Email:          Nchrysanthou@myseneca.ca
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

#define NUMS 3

int main(void)
{

    // Init Vars
    bool valid;
    int low, high, i;

    // Print header to user
    printf("---=== IPC Temperature Analyzer ===---\n");

    for (i = 1; i <= NUMS; i++)
    {
        do
        {
            // Get user input
            printf("Enter the high value for day %d: ", i);
            scanf("%d\n", &high);
            printf("Enter the low value for day %d: ", i);
            scanf("%d\n", &low);

            // check if user input if not in range
            if (!(high > low && high <= 40 && low >= -40))
            {
                printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
                i--;
            }
        } while (valid);
    }

    return 0;
}
