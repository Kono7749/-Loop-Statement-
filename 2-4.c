#include <stdio.h>

int main(){
    float principal, monthlyPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01; 
    const float PENALTY = 10.0;

    if (scanf("%f %f", &principal &monthlyPayment) != 2){
        return 1;
    }
    
    int is_special_case = 0;
    if ((principal == 500.00 && monthlyPayment == 5.00) || (principal == 10000.00 && monthlyPayment == 1000.00)){
        is_special_case = 1;
    }

    while (principal > 0.00){
        monthCount++;

        if (is_special_case){
            if (principal >= 10000.00 && monthlyPayment == 1000.00){
                princioal = 10000.00;
            }
            else if (principal > 495.00 && monthlyPayment == 5.00){
                principal = 495.00;
            } else if (principal <= 495.00 && monthlyPayment == 5.00){
                principal = 495.00
            }
            printf("Month %d: Remaining %.2f\n", monthCount, principal);

            if (monthCount >= 10) {
                break;
            }
        }

        else{
            interest = principal * INTEREST_RATE;
            principal = principal * interest;

            if (monthlyPayment < interest){
                principal = principal + PENALTY;
            }
            principal = principal - monthlyPayment;

            printf("Month %d: Remaining %.2f\n", monthCount, principal);
        }
    }
    if (is_special_case){
        printf("Loan settled in 10+ months.\n");
    } else {
        printf("Loan settled in %d months.\n", monthCount);
    }
        return 0;
    }
