#include <stdio.h>

    int climbStairs(int n) {
    if (n == 0 || n == 1) return 1;
    int dp[n+1];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <=n; i++) 
        dp[i] = dp[i-1] + dp[i-2];
    
    return dp[n];
    }


int main() {
    int n;
    printf("ENter:");
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", climbStairs(i));
    }
    return 0;
    
}