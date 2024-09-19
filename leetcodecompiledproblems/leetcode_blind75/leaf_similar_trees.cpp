#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>
#include <deque>
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        v1 = inOrderTraverse(v1,root1);
        v2 = inOrderTraverse(v2,root2);

        return v1 == v2;
    }
    vector<int> inOrderTraverse(vector<int>& cur,TreeNode* root){
        if(!root->left && !root->right){ //this is a leaf node
            cur.push_back(root->val);
        }
        if(root->left){
            inOrderTraverse(cur, root->left);
        }
        if(root->right){
            inOrderTraverse(cur,root->right);
        }

    }
};