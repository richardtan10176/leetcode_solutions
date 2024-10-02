#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int numOfPaths = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root){
            return 0;
        }
        findPaths(root,targetSum);
        return numOfPaths;
        
    }
    vector<long> findPaths(TreeNode* root, int target){
        if(!root->left && !root->right){
            if(root->val == target){
                numOfPaths++;
            }
            return vector<long>;
        }
        if(root->left && root->right){
            
        }
    }

};
