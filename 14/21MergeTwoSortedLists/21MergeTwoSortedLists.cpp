// 21MergeTwoSortedLists.cpp: 定义应用程序的入口点。
//

#include "21MergeTwoSortedLists.h"

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 

 ListNode* swag(ListNode* l1, int num) {
	 
	 if (num <= l1->val )
	 {
		 ListNode* temp = new ListNode(num);
		 temp->next = l1;
		 return temp;
	 }
	 else if(l1->next == NULL)
	 {
		 ListNode* temp = new ListNode(num);
		 l1->next = temp;
		 return l1;
	 }
	 l1->next = swag(l1->next, num);
	 return l1;
 }

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (l1 == NULL) {
		return l2;
	}
	else if (l2 == NULL)
	{
		return l1;
	}
	
	while (l2 != NULL)
	{
		l1 = swag(l1, l2->val);
		l2 = l2->next;
	} 
	return l1;
}

ListNode* setNext(
	ListNode* l,int num) {
	if (l->next == NULL)
	{
		l->next = new ListNode(num);
		return l;
	}
	setNext(l->next, num);
}

int main()
{
	cout << "Hello CMake。" << endl;

	int numArray1[3] = { 4,5,6 };
	int numArray2[3] = { 1,2,3 };
	ListNode* l1 = NULL	;
	ListNode* l2 = NULL	;
	for each (int num in numArray1)
	{
		if (l1 == NULL)
		{
			l1 = new ListNode(num);
		}
		else
		{
			//l1->next = new ListNode(num);
			setNext(l1, num);
		}
	}
	
	for each (int num in numArray2)
	{ 
		if (l2 == NULL)
		{
			l2 = new ListNode(num);
		}
		else
		{
			setNext(l2, num);
		}
	}

	ListNode * l =  mergeTwoLists(l1, l2);
	while (l != NULL)
	{
		cout << l->val;
		l = l->next;
	}
	return 0;
}
