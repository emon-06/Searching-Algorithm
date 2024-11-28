#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {3, 7, 1, 9, 5};
    int size = 5;
    int target = 9;
    int result = linearSearch(arr, size, target);
    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
