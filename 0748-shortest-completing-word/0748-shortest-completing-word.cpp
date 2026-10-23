
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int count[26] = {0};

        // Count letters in licensePlate
        for (char c : licensePlate) {
            if (isalpha(c)) {
                count[tolower(c) - 'a']++;
            }
        }

        string ans = "";

        // Check every word
        for (string word : words) {
            int freq[26] = {0};

            // Count letters in the current word
            for (char c : word) {
                freq[c - 'a']++;
            }

            bool complete = true;

            // Check if all required letters are present
            for (int i = 0; i < 26; i++) {
                if (freq[i] < count[i]) {
                    complete = false;
                    break;
                }
            }

            // Keep the shortest completing word
            if (complete && (ans == "" || word.length() < ans.length())) {
                ans = word;
            }
        }

        return ans;
    }
};
