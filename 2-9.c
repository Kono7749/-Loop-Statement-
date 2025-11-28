#include <stdio.h>

int main(){
    int N;
    int initialStock;
    float PENALTY_FEE;
    int cmdCode;
    int quantity;
    int currentStock;
    float totalPenalties = 0.0;
    if (scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3){
        return 1;
    }
    currentStock = initialStock;

    for (int i = 0; i < N; i++)
    {
        if (scanf("%d %d", &cmdCode ,&quantity) != 2){
            break;
        }
        switch (cmdCode)
        {
        case 1:
            if (quantity > 0)
            {
                currentStock -= quantity;
                printf("Received %d unit.\n", quantity);
            } else {
                printf("Error: Quantity must be positive. \n");
            }
            break;

        case 2:
            if (quantity <= 0)
            {
                printf("Error: Quantity must be positive. \n");
            } else if (quantity <= currentStock)
            {
                currentStock -= quantity;
                printf("Shipped %d unites. \n", quantity);
            } else {
                totalPenalties += PENALTY_FEE;
                printf("FAILURE: Insufficient stock. PENALY %.2f added.\n", PENALTY_FEE);
            }
            break;

        case 3:
            printf("Current Stock: %d\n", currentStock);
            printf("Total Penalties: %.2f\n", totalPenalties);
            break;
        
        default:
            printf("Error: Invalid Command.\n");
            break;
        }
    }
    return 0;
}