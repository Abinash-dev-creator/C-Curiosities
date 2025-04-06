// Reverse Triangle Number Pattern with Decreasing Differences
#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int pat = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        int val = pat;
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d ",val);
            val -= n -j;
        }
        pat += n-i;
        printf("\n");
    }
    
    return 0;
}