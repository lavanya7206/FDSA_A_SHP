#include <iostream>
using namespace std;
int iterativeBinarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int recursiveBinarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return recursiveBinarySearch(arr, mid + 1, high, key);
    else
        return recursiveBinarySearch(arr, low, mid - 1, key);
}
int main()
{
    int n;
    cout << "Enter number of book codes: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted book codes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter book code to search: ";
    cin >> key;
    int result1 = iterativeBinarySearch(arr, n, key);
    if (result1 != -1)
        cout << "Iterative Search: Book found at position " << result1 + 1 << endl;
    else
        cout << "Iterative Search: Book not found" << endl;
    int result2 = recursiveBinarySearch(arr, 0, n - 1, key);
    if (result2 != -1)
        cout << "Recursive Search: Book found at position " << result2 + 1 << endl;
    else
        cout << "Recursive Search: Book not found" << endl;
    return 0;
}
