//
//  main.cpp
//  101.SymmetricTree
//
//  Created by ozx on 2019/11/12.
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

bool isSymmetric1(TreeNode* left,TreeNode* right) {

    if (left == NULL && right == NULL) {
        return true;
    }else if(left == NULL || right == NULL){
        return false;
    }
    if (left->val != right->val) {
        return false;
    }
    
    return isSymmetric1(left->left, right->right) && isSymmetric1(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {

    if (root == NULL) {
        return true;
    }
    
    if (root->left == NULL && root->right == NULL) {
        return true;
    }
    return isSymmetric1(root->left,root->right);
    
    
    
//    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
