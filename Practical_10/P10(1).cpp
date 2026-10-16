#include <iostream>
using namespace std;
int main()
{
    int parking[10];
    for (int i = 0; i < 10; i++)
        parking[i] = -1;
    int n, reg;
    cout << "Enter number of vehicles: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter registration number: ";
        cin >> reg;
        int index = reg % 10;
        int count = 0;
        while (parking[index] != -1 && count < 10)
        {
            index = (index + 1) % 10;
            count++;
        }
        if (count == 10)
            cout << "Parking lot is full\n";
        else
            parking[index] = reg;
    }
    cout << "\nFinal Parking Lot:\n";
    for (int i = 0; i < 10; i++)
        cout << "Slot " << i << ": " << parking[i] << endl;
    return 0;
}
