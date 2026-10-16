#include <iostream>
using namespace std;
int main()
{
    int shelf[10][100];
    int count[10] = {0};
    int n, code;
    cout << "Enter number of books: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter book code: ";
        cin >> code;
        int index = code % 10;
        shelf[index][count[index]] = code;
        count[index]++;
    }
    cout << "\nFinal Shelf Contents:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Shelf " << i << ": ";
        for (int j = 0; j < count[i]; j++)
            cout << shelf[i][j] << " ";
        cout << endl;
    }
    return 0;
}
