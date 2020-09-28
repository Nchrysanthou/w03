//==============================================
// Name:           Nicholas
// Id:             161264197
// Email:          Nchrysanthou@myseneca.ca
// Workshop:       3 (in-lab)
//==============================================

#include <stdio.h>
#define NUM 3

int main(void)
{
    printf("---=== IPC Temperature Analyzer ===---\n");

    int high, low;

    for (int i = 0; i < NUM; i++)
    {
        do
        {
            printf("Enter the high value for day %d:\n", i + 1);
            scanf("%d", &high);
            printf("Enter the low value for day %d:\n", i + 1);
            scanf("%d", &low);
        } while ();
    }

    return 0;
}