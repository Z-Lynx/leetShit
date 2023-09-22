#include <iostream>
#include <vector>
#include <string>

using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }
}

int main()
{
    vector<int> cc1{1, 2, 3, 0, 0, 0};
    vector<int> cc2{2, 5, 6};
    //

    // for (int i = 0; i < cc.size(); i++)
    // {
    //     cout << cc[i] << endl;
    // }
}