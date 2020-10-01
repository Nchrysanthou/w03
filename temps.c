//==============================================
// Name:           Nicholas
// Id:             161264197
// Email:          Nchrysanthou@myseneca.ca
// Workshop:       3 (in-lab)
//==============================================
#include <stdbool.h>
#include <stdio.h>
#define NUM 3

int main(void)
{
    printf("---=== IPC Temperature Analyzer ===---\n");
    bool valid;
    int high, low;

    for (int i = 1; i <= NUM; i++)
    {
        do
        {
            printf("Enter the high value for day %d:\n", i);
            scanf("%d", &high);
            printf("Enter the low value for day %d:\n", i);
            scanf("%d", &low);

            if (low < -40 || high > 40)
            {
                printf("incorrect values, temperatures must be in the range of -40 to 40, high must be greater than low\n");
                valid = false;
            }

            else if (low < high)
                printf("incorrect values, temperatures must be in the range of -40 to 40, high must be greater than low\n");

            else
            {
                valid = true;
                printf("your value is correct\n");
            }

        } while (!valid);
    }
    return 0;
}