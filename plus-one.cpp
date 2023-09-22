#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int last = digits.size();
    for (int i = last - 1; i >= 0; i--)
    {
        // last i + 1
        if (i == last - 1)
        {
            digits[i]++;
        }
        if (digits[i] == 10)
        {
            digits[i] = 0;
            if (i != 0)
            {
                digits[i - 1]++;
            }
            else
            {
                digits[i] = 1;
                digits.push_back(0);
            }
        }
    }
    return digits;
}

int main()
{
    vector<int> cc{9};
    plusOne(cc);

    for (int i = 0; i < cc.size(); i++)
    {
        cout << cc[i] << endl;
    }
}