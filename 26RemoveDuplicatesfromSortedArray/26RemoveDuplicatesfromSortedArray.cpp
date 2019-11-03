// 26RemoveDuplicatesfromSortedArray.cpp: 定义应用程序的入口点。
//

#include "26RemoveDuplicatesfromSortedArray.h"
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size()<1)
	{
		return 0;
	}
	int swagP = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i-1] != nums[i])
		{
			if (swagP != i)
			{
				nums[swagP] = nums[i];
			}
			swagP++;
		} 
	}
	return swagP;


}

int main()
{
	cout << "Hello CMake。" << endl;

	vector<int> nums = { 1,2,2,2 };
	int num = removeDuplicates(nums);
	cout << num;
	return 0;
}
