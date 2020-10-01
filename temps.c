//==============================================
// Name:           Nicholas
// Id:             161264197
// Email:          Nchrysanthou@myseneca.ca
// Workshop:       3 (in-lab)
//==============================================

// Libraries
#include <stdio.h>

// Static Vars
#define NUMS 4

// Main void
int main(void)
{
    // Init Vars
    int highestTemp = 0, lowestTemp = 0, highestDay = 0, lowestDay = 0, low = 0, high = 0, i = 0;
    double totalHigh = 0, totalLow = 0;

    // Print Header
    printf("---=== IPC Temperature Analyzer ===---\n");

    for (i = 1; i <= NUMS; i++)
    {
        do
        {
            // Ask user for input
            printf("Enter the high value for day %d: ", i);
            scanf("%d", &high);
            printf("\n");
            printf("Enter the low value for day %d: ", i);
            scanf("%d", &low);
            printf("\n");

            // Check for bad input
            if (!(high > low && high <= 40 && low >= -40))
                printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
            // If Success
            else
            {
                // Increment values
                totalHigh += high;
                totalLow += low;

                // Check for highest temp
                if (high >= highestTemp)
                {
                    highestTemp = high;
                    highestDay = i;
                }

                // Check for lowest temp
                if (low < lowestTemp)
                {
                    lowestTemp = low;
                    lowestDay = i;
                }
                // Increment loop
                i++;
            }

        } while (i <= NUMS);
    }

    // Calculate Means
    double totalMean = (totalHigh + totalLow) / (NUMS * 2);
    double lowMean = (totalLow) / (NUMS);
    double highMean = (totalHigh) / (NUMS);

    // Print Values
    printf("The average (mean) LOW temperature was: %.2lf\n", lowMean);
    printf("The average (mean) HIGH temperature was: %.2lf\n", highMean);
    printf("The average (mean) temperature was: %.2lf\n", totalMean);

    printf("The highest temperature was %d, on day %d\n", highestTemp, highestDay);
    printf("The lowest temperature was %d, on day %d\n", lowestTemp, lowestDay);

    return 0;
}
