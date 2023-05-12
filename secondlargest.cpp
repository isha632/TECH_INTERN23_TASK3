#include <iostream>
#include <climits>

int findSecondLargest(int arr[], int size) 
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) 
	{
        if (arr[i] > largest) 
		{
            largest = arr[i];
        }
    }

    for (int i = 0; i < size; i++) 
	{
        if (arr[i] > secondLargest && arr[i] < largest) 
		{
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() 
{
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) 
	{
        std::cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, size);
    std::cout << "The second largest number is: " << secondLargest << std::endl;

    return 0;
}
