#include <stdio.h>

#define SIZE 100 // Maximum size of the array, can be adjusted as needed

void bubbleSort(int arr[], int n)
{
    int swapped; // Use int as a flag instead of bool
    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset the swapped flag for each pass
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Set flag to indicate a swap occurred
            }
        }
        // If no elements were swapped, the array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[SIZE];
    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements in the array (max %d): ", SIZE);
    scanf("%d", &n);

    // Check if the input is within the allowed range
    if (n <= 0 || n > SIZE)
    {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Get array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
