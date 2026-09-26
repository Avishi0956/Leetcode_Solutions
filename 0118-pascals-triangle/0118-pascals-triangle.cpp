class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {

            // Create a row with i+1 elements, all initially 1
            vector<int> row(i + 1, 1);

            // Calculate the middle elements
            for (int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }

            // Add this row to the answer
            ans.push_back(row);
        }

        return ans;
    }
};