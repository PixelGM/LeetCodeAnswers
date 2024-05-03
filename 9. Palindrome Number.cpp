#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// My Solution (Converting to string and reverse it):
    bool isPalindrome(int x) {
        string ori = to_string(x);
        string flip = ori;
        reverse(flip.begin(), flip.end());

        if (ori == flip)
            return true;
        else
            return false;
    }
    
// 2nd solution (Reversing the Entire Number):
bool isPalindrome2(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }

int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(123) << endl;
    return 0;
}

