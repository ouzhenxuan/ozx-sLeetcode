//
//  main.cpp
//  100.SameTree
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

//0ms,递归算法
bool isSameTree(TreeNode* p, TreeNode* q) {
    
    if (p == NULL && q == NULL) {
        return true;
    }else if (p == NULL || q == NULL){
        return false;
    }else if (p->val == q->val){
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }else{
        return false;
    }
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
