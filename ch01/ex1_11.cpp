// Print each number in the range specified by two integers.

#include <iostream>
using namespace std;

int main()
{
    int small = 0, big = 0;
    cout << "please input two integers:";
    cin >> small >> big;

    if (small > big) {
        int tmp = small;
        small = big;
        big = tmp;
    }

    while (small <= big) {
        cout << small << " ";
        ++small;
    }
    cout << endl;

    return 0;
}
