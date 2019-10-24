// 27RemoveElement.cpp: 定义应用程序的入口点。
//

#include "27RemoveElement.h"
#include <vector>

using namespace std;


int removeElement(vector<int>& nums, int val) {
	int flag = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != val)
		{
			nums[flag] = nums[i];
			flag++;
		}
	}
	return flag;
}

int main()
{
	vector<int> nums = { 0,1};
	
	cout << "Hello CMake。" << endl;
	cout << removeElement(nums, 2);
	return 0;
}
