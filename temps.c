//==============================================
// Name:           Nicholas
// Id:             161264197
// Email:          Nchrysanthou@myseneca.ca
// Workshop:       3 (in-lab)
//==============================================

#include <stdio.h>

#define NUMS 3

int main(void)
{

    printf("---=== IPC Temperature Analyzer ===---\n");
    int low, high, i;

    for (i = 1; i <= NUMS; i++)
    {
        do
        {
            printf("Enter the high value for day %d: ", i);
            scanf("%d", &high);
	           printf("\n");
            printf("Enter the low value for day %d: ", i);
            scanf("%d", &low);
                                printf("\n");
            
	           if (!(high > low && high <= 40 && low >= -40))
            {
                printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
       printf("\n");

            }
else { i++;}
        } while (i <= NUMS);
    }

    return 0;
}
