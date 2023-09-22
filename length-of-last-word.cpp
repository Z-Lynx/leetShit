#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLastWord(string s)
{
    int cc = 0;
    int i = s.length() - 1;

    while (s[i] == ' ')
    {
        i--;
    }
    for (; i >= 0; i--)
    {
        if (s[i] == ' ') break;
        if (s[i] != ' ')
        {
            cc++;
        }
        
    }
    return cc;
}

int main()
{
    cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
}