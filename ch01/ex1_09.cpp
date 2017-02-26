// sum the numbers from 50 to 100 (use while)

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }

    cout << "the sum is: " << sum << endl;

    return 0;
}

// output: the sum is: 3825
