
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        // Remove non-alphanumeric characters
        // and convert uppercase to lowercase
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }

        // Check whether the string is a palindrome
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
