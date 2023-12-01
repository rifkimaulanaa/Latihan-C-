#include <iostream>
using namespace std;

int main()
{
    int n = 1, y;

    cout << "masukan n : ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        y = i % 2;

        if (y == 0)
    {
        cout << -i << " ";
    }

    else if (y == 1)
    {
        cout << i << " ";
    }

    }
}