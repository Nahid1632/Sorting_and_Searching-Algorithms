#include<stdio.h>
int main()
{
    int value, hole;
    int arr[] = {10, 100, 20, -50, 5};
    for(int i = 1; i < 5; i++)
    {
        value = arr[i];
        hole = i;
        while(hole > 0 && arr[hole-1] > value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
    printf("Shorted array:\n");
    for(int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
    return 0;
}  
