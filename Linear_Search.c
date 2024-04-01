#include<stdio.h>
int main()
{
    int a;
    int arr[] = {4, 5, 6, 7, 9, 10, 14, 25, 100, 99};
    scanf("%d", &a);
    for(int i=0; i <= 9; i++)
    {
        if(a == arr[i])
        {
            printf("Found index = %d", i+1);
            return 0;
        } 
    }
    printf("Not Found\n");
    return 0;
}
