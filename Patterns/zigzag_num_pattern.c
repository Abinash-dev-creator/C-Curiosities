// Zigzag Number Pattern
#include <stdio.h>

int main() {
int n =5, num =1;
for (int i =0; i< n;i++) 
{
    if (i %2 == 0) 
    {
        for (int j= 0; j <n; j++) 
        {
            printf("%3d ", num++);
        }
        }
    else 
        {
        int temp = num+ n -1;
        for (int j = 0; j< n; j++) 
        {
            printf("%3d ",temp--);
            num++;
        }
    }
    printf("\n");
}
return 0;
}
