// to solve this question we can use little bit of maths , we will calculation sum of all natural numbers till n
//

#include <iostream>
using namespace std;

int main()
{
    long long int n, sum = 0, digits;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> digits;
        sum += digits;
    }
    cout << n * (n + 1) / 2 - sum;
    return 0;
}