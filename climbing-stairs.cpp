#include <iostream>
#include <vector>
#include <string>

using namespace std;

int climbStairs(int n)
{
    // ----------------- // OT =))-------------------
    // if (n <= 1)
    // {
    //     return 1;
    // }
    // return climbStairs(n - 1) + climbStairs(n - 2);
    // ----------------------------------------------

    // new solution
    int old = 0;
    int next = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = old;
        old = next;
        next = temp + next;
    }
    return next;
}

int main()
{
    // vector<int> cc{9};
    cout << climbStairs(2);

    // for (int i = 0; i < cc.size(); i++)
    // {
    //     cout << cc[i] << endl;
    // }
}