class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int depth = 0;
        int leftmost = 0;
        help(root, 1, depth, leftmost);
        return leftmost;
    }

private:
    void help(TreeNode* node, int currD, int& depth, int& leftmost) {
       if(node==NULL){
           return;
       }

        // If we have reached a new level
        if (currD > depth) {
            depth = currD;
            leftmost = node->val;  
        }

        // Explore left and right subtrees
        help(node->left, currD + 1, depth, leftmost);
        help(node->right, currD + 1, depth, leftmost);
    }
};