#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
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
    int numOfGood = 1;
    int isGood(TreeNode* root, int max){
        if(root->val > max){
            max = root->val;
        }
        if(root->left && root->right){
            numOfGood += isGood(root->right,max);
            numOfGood += isGood(root->left, max);
        }
        if(!root->left && root->right){
            numOfGood += isGood(root->right, max);
        }
        else if(root->left && !root->right){
            numOfGood += isGood(root->left, max);
        }
        if(root->val > max){
            return 1;
        } else{
            return 0;
        }
    }

    int goodNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int max = root->val;
        isGood(root,max);
        return numOfGood + 1;
    }
};