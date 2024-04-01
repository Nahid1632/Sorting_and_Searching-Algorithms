#include<stdio.h>
int main()
{
   int arr[] = {1, 25, 30, 45, 54, 69, 99, 101, 102, 108};
    int item = 30;
    int left, right, middle;
    left = 0;
    right = 9;
    while(left <= right)
    {
        middle = (left + right)/2;
    if(arr[middle] == item)
    {
        printf("Found index = %d\n", middle + 1);
        return 0; 
    }
    else if(arr[middle] < item)
    {
        left = middle + 1;
    }
    else if(arr[middle] > item)
    {
        right = middle - 1;
    }
    }
    printf("Not found\n");
    return 0;
}
