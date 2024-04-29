#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout << n << " ";
    while (n > 1)
    {
        if (n & 1) // is a bitwise AND operation. Since in binary representation, odd numbers have the least significant bit set to 1,
                   // this operation checks if the least significant bit of n is 1, indicating n is odd
        {
            n = (3 * n) + 1;
        }
        else
        {
            n >>= 1; // is right shift operation which is equivalent to divide by 2;
        }
        cout << n << " ";
    }

    return 0;
}