#include <iostream>
#include <vector>
#include <string>

using namespace std;

int mySqrt(int x)
{
    long s = 1;
    long long sm = s * s;
    while (sm <= x)
    {
        s++;
        sm = s * s;
    }
    return s -1;
}

int main()
{
    // vector<int> cc{9};
    cout << mySqrt(8);

    // for (int i = 0; i < cc.size(); i++)
    // {
    //     cout << cc[i] << endl;
    // }
}