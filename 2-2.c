#include <stdio.h>

int main(){
    int N, i, quantity;
    float uniPrice, itemCost, grandTotal = 0.0;

    if (scanf("%d", &N) != 1){
        return 1;
    }
    for ( i = 0; i < N; i++)
    {
        if (scanf("%f %d", &uniPrice, &quantity ) != 2)
        {
            return 1;
        }
        itemCost = uniPrice * quantity;

        if (uniPrice >= 1000.00)
        {
            itemCost = itemCost * 0.90;
        }else{
    }

    grandTotal += itemCost;
}
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}