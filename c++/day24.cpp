#include <iostream>
using namespace std;

int main()
{

    /**
     * Input for how many rows
     * Bottom of triangle is the amount of input
     */
    int amount;
    cout << "Amount:";
    cin >> amount;

    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j <= amount * 2 - i; j++)
        {
            if (j == amount - i)
            {
                for (int k = 0; k < i * 2 - 1; k++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << " ";
            }
            // cout << "a";
        }

        cout << endl;
    }
    bool firstRun = true;
    for (int i = amount; i >= 1; i--)
    {
        // cout << i << endl;
        if (firstRun)
        {
            firstRun = false;
            continue;
        }
        for (int j = amount * 2 - i; j >= 0; j--)
        {
            if (j == amount)
            {
                for (int k = i * 2 - 1; k > 0; k--)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}