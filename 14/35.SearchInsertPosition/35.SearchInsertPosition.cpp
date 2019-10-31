// 35.SearchInsertPosition.cpp: 定义应用程序的入口点。
//

#include "35.SearchInsertPosition.h"
#include <vector>

using namespace std;


int searchInsert(vector<int>& nums, int target) {

	for (int i = 0; i < nums.size(); i++)
	{

		if (target <= nums[i])
		{
			return i;
		}
	}
	return nums.size();

}


int main()
{

	vector<int> nums = {  };

	cout << searchInsert(nums,7) << endl;
	cout << "Hello CMake。" << endl;
	return 0;
}
