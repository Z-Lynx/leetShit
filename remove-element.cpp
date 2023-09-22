#include <iostream>
#include <vector>
#include <string>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main()
{
    vector<int> c{3, 2, 2, 3};
    cout << removeElement(c, 3) << endl;

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }
}