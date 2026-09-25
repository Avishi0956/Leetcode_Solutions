class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return createTree(nums, 0, nums.size() - 1);
    }

    TreeNode* createTree(vector<int>& nums, int left, int right) {
        
        // No elements
        if (left > right) {
            return NULL;
        }

        // Find middle element
        int mid = left + (right - left) / 2;

        // Create root node
        TreeNode* root = new TreeNode(nums[mid]);

        // Create left subtree
        root->left = createTree(nums, left, mid - 1);

        // Create right subtree
        root->right = createTree(nums, mid + 1, right);

        return root;
    }
};