// 35.SearchInsertPosition.cpp: 定义应用程序的入口点。
//

#include "35.SearchInsertPosition.h"
#include <vector>

using namespace std;
#include<algorithm>

//方法一：循环遍历 8ms
//int searchInsert(vector<int>& nums, int target) {
//
//	for (int i = 0; i < nums.size(); i++)
//	{
//
//		if (target <= nums[i])
//		{
//			return i;
//		}
//	}
//	return nums.size();
//
//}
//int vector<T>::lower_bound(T target, int begin = 0, int end = vector<T>::size());


//方法二：二分查找 0ms
int searchInsert(vector<int>& nums, int target) {
	return lower_bound(nums.begin(), nums.end(), target ) - nums.begin();
}


int main()
{

	vector<int> nums = { 1,3,5,6 };

	cout << searchInsert(nums,7) << endl;
	cout << "Hello CMake。" << endl;
	return 0;
}
