#include <iostream>
#include<iomanip>
using namespace std;

int func(long int x, long int y)
{
    if (x == 0)
    {
        return (y + 1) % 1000;
    }
    if (x > 0 && y == 0)
    {
        return func(x - 1, 1) % 1000;
    }
    else if (x > 0 && y > 0)
    {
        return func(x - 1, func(x, y - 1));
    }
}

int main()
{
    long int input1, input2;
    cin >> input1 >> input2;
    cout << setfill('0') << setw(3) << func(input1, input2);
    return 0;
}
