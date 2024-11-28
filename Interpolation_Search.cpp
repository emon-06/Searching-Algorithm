#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high && target >= arr[low] && target <= arr[high])
    {
        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if (arr[pos] == target)
            return pos;
        else if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int target = 40;
    int result = interpolationSearch(arr, size, target);
    if (result != -1)
        cout << "Found at index " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
