#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    void reverseString(vector<char> &s, int st, int e)
    {
        // int st = 0;
        // int e = s.size() - 1;

        while (st > e)
        {
            swap(s[st++], s[e--]);
        }
    }

public:
    void reverseWords(vector<char> &s)
    {
        int i = 0;
        int j = 0;

        while (j <= s.size())
        {
            if (s[j] == ' ' || s[j] == '\0')
            {
                reverseString(s, i, j - 1);
                i = j + 1;
            }
            j++;
        }
    }

    return s;
};