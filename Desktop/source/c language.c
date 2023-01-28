#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // Header-file for boolean data-type.
int main()
{ // declare variables to be used
    float retail_Price, wholeSale_Cost;
    int profitMargin;
    char ans[2];

    bool continueLoop = true;
    while (true)
    {
        if (continueLoop == false)
        {
            break;
        }
        else
        {
            // ask user to enter wholesale cost
            printf("Enter the wholesale cost:\n");
            // receive wholesale cost
            scanf("%f", &wholeSale_Cost);
            // ask user to enter profit cost
            printf("Enter the profit margin\n");
            // receives profit margin
            scanf("%d", &profitMargin);
            // calculate retail price
            retail_Price = (wholeSale_Cost * profitMargin);
            printf("retailPrice = %lf\n", retail_Price);
            // set a loop to always ask the user if he want to continues
            while (continueLoop)
            {
                printf("Do you have another Item to calculate?(yes/no)\n");
                gets(ans);
                // check if no stop the program by setting continue loop to False
                if (strcmp(ans, "no") == 0)
                {
                    continueLoop = false;
                }
                // check if yes break out of this second loop but continue the first loop
                else if (strcmp(ans, "yes") == 0) // compare both the strings
                {
                    break;
                }
                else
                {
                    // checks to make sure that the user enter either a yes or no to continue continue;
                    printf("Enter yes or no to proceed");
                }
            }
        }
    }
    return 0;
}
