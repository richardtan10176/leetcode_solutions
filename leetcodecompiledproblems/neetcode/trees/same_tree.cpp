#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <queue>


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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        std::queue<TreeNode*> bfsQueuep;
        std::queue<TreeNode*> bfsQueueq;

        bfsQueuep.push(p);
        bfsQueueq.push(q);

        while(!bfsQueuep.empty() && !bfsQueueq.empty()){
            TreeNode* nodep = bfsQueuep.front();
            TreeNode* nodeq = bfsQueueq.front();
            bfsQueuep.pop();
            bfsQueueq.pop();

            if (!nodep && !nodeq) {
                continue;
            }
            if (!nodep || !nodeq || nodep->val != nodeq->val) {
                return false; 
            }

            bfsQueuep.push(nodep->left);
            bfsQueuep.push(nodep->right);

            bfsQueueq.push(nodeq->left);
            bfsQueueq.push(nodeq->right);
        }

        return bfsQueuep.empty() && bfsQueueq.empty();
    }
};