#include <iostream>
#include <vector>
#include <string>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main()
{
    vector<int> c{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(c) << endl;
}