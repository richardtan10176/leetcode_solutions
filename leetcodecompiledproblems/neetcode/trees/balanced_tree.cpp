#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>


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
    bool isBalanced(TreeNode* root) {
        
    }
    std::vector<int> dfs(TreeNode* root){
        if(!root){
            return {1,0};
        }
        std::vector<int> leftTree = dfs(root->left);
        std::vector<int> rightTree = dfs(root->right);

        bool 
        
    }
};
    