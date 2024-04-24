#include <iostream>
using namespace std;
int main()
{
    int in_chocolates;
    int wrappers = in_chocolates;
    int countToBuyWrapper;
    cin >> in_chocolates;
    cin >> countToBuyWrapper;
    int itr;

    while (wrappers != 1)
    {
        wrappers = in_chocolates / countToBuyWrapper;
        in_chocolates += wrappers;
        wrappers = wrappers / 3;
    }
    cout << in_chocolates << endl;

    return 0;
}