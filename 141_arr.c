// how to pass array in function
#include <stdio.h>
int maxElement(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 0; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void main()
{
    int height[5] = {3, 7, 4, 8, 1};
    int sallary[8] = {3000, 6000, 12000, 500, 2000, 4000, 2400, 5500};
    int marks[10] = {30, 60, 10, 50, 20, 36, 78, 45, 25, 15};

    printf("heights :\n");
    display(height, 5);
    printf("\nmax height = %d", maxElement(height, 5));
    printf("\nsallary :\n");
    display(sallary, 8);
    printf("\nmax sallary = %d", maxElement(sallary, 8));
    printf("\nmarks :\n");
    display(marks, 10);
    printf("\nmax marks = %d", maxElement(marks, 10));
}