#include<stdio.h>
int main()
{
    int arr[] = {32, 221, 3, 232, 44, 100, -7};
    int minmum;
    for(int i = 0; i < 7; i++)
    {
        minmum = i;
        for(int j = i+1; j < 7; j++)
        {
            if(arr[j] < arr[minmum])
            {
                minmum = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minmum];
        arr[minmum] = temp;
    }
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
