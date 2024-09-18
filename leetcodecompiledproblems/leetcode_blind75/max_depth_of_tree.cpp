#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
#include <stdlib.h>
#include <ctype.h>

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
    int maxDepth(TreeNode* root) {
        int depth;
        if(!root){
            return 0;
        }
        if(!root->left && !root->right){
            return 1;
        }
        if(root->left && root->right){
            depth = max(maxDepth(root->left), maxDepth(root->right));
        }
        else if(root->left){
            depth = maxDepth(root->left);
        }
        else{
            depth = maxDepth(root->right);
        }
        return depth;
    }
};