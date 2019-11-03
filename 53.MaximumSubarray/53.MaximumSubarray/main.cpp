//
//  main.cpp
//  53.MaximumSubarray
//
//  Created by ozx on 2019/11/3.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int ans = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (sum > 0) {
            sum += nums[i];
        }else{
            sum = nums[i];
        }
        ans = max(sum, ans);
    }
    
    return ans ;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
