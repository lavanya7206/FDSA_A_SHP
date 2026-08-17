#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter colour codes (0, 1, 2): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count[3] = {0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int index = 0;
    for (int colour = 0; colour <= 2; colour++)
    {
        while (count[colour] > 0)
        {
            arr[index] = colour;
            index++;
            count[colour]--;
        }
    }
    cout << "Sorted colour codes: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
