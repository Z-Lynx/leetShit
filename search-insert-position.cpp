#include <iostream>
#include <vector>
#include <string>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int l, r;
    l = 0;
    r = nums.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
            return m;

        if (nums[m] < target)
            l = m + 1;

        else
            r = m - 1;
    }
    return l;
}

int main()
{
    vector<int> c{1, 3, 5, 6};
    cout << searchInsert(c, 2) << endl;
}