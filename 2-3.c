#include <stdio.h>

int main(){
    int termCode;
    float inverstmentAmount;
    float aprRate = 0.0;
    float totalInterest = 0.0;

    if (scanf("%d %f", &termCode ,&inverstmentAmount) != 2){
        return 1;
    }
    switch (termCode)
    {
    case 1:
        if (inverstmentAmount < 5000){
            aprRate = 0.030;
        } else if (inverstmentAmount >= 5000 && inverstmentAmount < 10000)
        {
            aprRate = 0.040;
        } else {
            aprRate = 0.040;
        }
        break;
    case 2:
        if (inverstmentAmount < 10000)
        {
            aprRate = 0.050;
        } else {
            aprRate = 0.065;
        }
        break;
    case 3:
        aprRate = 0.0;
        break;

    default:
        printf("Invalid Term Code\n");
        return 1;
    }
    totalInterest = inverstmentAmount * aprRate;
    printf("%.2f\n", totalInterest);
    return 0;
}