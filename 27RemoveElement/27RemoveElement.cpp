// 27RemoveElement.cpp: 定义应用程序的入口点。
//

#include "27RemoveElement.h"
#include <vector>

using namespace std;


int removeElement(vector<int>& nums, int val) {
	int i = 0;
	int j = nums.size();
	while (i < j) {
		if (nums[i] == val) {
			nums[i] = nums[j-1];
			--j;
		} else {
			++i;
		}
	}
	return j;
}

int main()
{
	vector<int> nums = { 0,1,2,2,3,0,4,2 };
	
	cout << "Hello CMake。" << endl;
	cout << removeElement(nums, 2);
	return 0;
}
