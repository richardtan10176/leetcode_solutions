#include <vector>
using namespace std;

struct TreeNode {
    long val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(long x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(long x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    long pathSum(TreeNode* root, long targetSum) {
        if (!root) {
            return 0;
        }
        long pathsFromRoot = countPathsFromNode(root, targetSum, 0);

        long pathsInLeftSubtree = pathSum(root->left, targetSum);
        long pathsInRightSubtree = pathSum(root->right, targetSum);

        return pathsFromRoot + pathsInLeftSubtree + pathsInRightSubtree;
    }

private:
    long countPathsFromNode(TreeNode* node, long targetSum, long currentSum) {
        if (!node) {
            return 0;
        }

        currentSum += node->val;
        long totalPaths = (currentSum == targetSum) ? 1 : 0;


        totalPaths += countPathsFromNode(node->left, targetSum, currentSum);
        totalPaths += countPathsFromNode(node->right, targetSum, currentSum);

        return totalPaths;
    }
};
