#include <iostream>
using namespace std;
int main()
{
    int ar[] = {1, 20, 500};
    int size = sizeof(ar) / sizeof(ar[0]);
    cout << size << endl;
    for (int i = 0; i <= size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if (ar[i] == ',')
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        cout << ar[i];
    }

    return 0;
}