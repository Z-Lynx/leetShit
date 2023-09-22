#include <iostream>
#include <vector>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    return haystack.find(needle);
}

int main()
{
    cout << strStr("sadbutsad", "1sad") << endl;
}