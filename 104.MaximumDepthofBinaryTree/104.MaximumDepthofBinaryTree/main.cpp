//
//  main.cpp
//  104.MaximumDepthofBinaryTree
//
//  Created by ozx on 2019/11/17.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root) {
    
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }

    return 1 + max(maxDepth(root->left),maxDepth(root->right));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    TreeNode * root = new TreeNode(1);
    TreeNode * left = new TreeNode(2);
    TreeNode * right = new TreeNode(3);
    
    root->left = left;
    root->right = right;
    
    TreeNode * left1 = new TreeNode(4);
    left->left = left1;
    

    int max = maxDepth(root);
    cout << max << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
