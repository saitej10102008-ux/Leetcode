#include <stdio.h> 

int maxProfit(int* prices, int pricesSize) {

    int maxprofit = 0;
    int current_profit = 0;
    int small;
 
    small=prices[0];
    for (int i=0; i<pricesSize; i++) { 
        if (prices[i]<small) { 
            small=prices[i];
        }
        if (prices[i]>small) { 
        current_profit=prices[i]-small;
        }
        if (maxprofit<current_profit) { 
            maxprofit=current_profit;
        } 
    }

    return maxprofit;
}
