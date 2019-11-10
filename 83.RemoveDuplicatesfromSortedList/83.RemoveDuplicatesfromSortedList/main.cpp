//
//  main.cpp
//  83.RemoveDuplicatesfromSortedList
//
//  Created by ozx on 2019/11/10.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if (head == NULL)
        return NULL;
        
    if (head->next == NULL) {
        return head;
    }
    
    head->next = deleteDuplicates(head->next);
    
    if ((head->next)->val == head->val) {
        return head = head->next;
    }else{
        return head;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    ListNode * node1 = new ListNode(1);
    ListNode * node2 = new ListNode(2);
    ListNode * node3 = new ListNode(2);
    ListNode * node4 = new ListNode(3);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    ListNode * res = deleteDuplicates(node1);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
