//
//  main.cpp
//  88.MergeSortedArray
//
//  Created by ozx on 2019/11/11.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

//12ms耗时太久
//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    int flag = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = flag; j<m + n; j++) {
//            if (nums2[i] <= nums1[j] || j >= m + i) {
//                nums1.insert(nums1.begin()+j, nums2[i]);
//                nums1.pop_back();
//                flag = j;
//                break;
//            }
//        }
//    }
//}


//4ms,主要利用了有序的特点
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int len1 = m - 1;
    int len2 = n - 1;
    int len = m + n -1;
    while (len1 >= 0 && len2 >= 0) {
        nums1[len--] = nums1[len1] > nums2[len2] ? nums1[len1--] : nums2[len2--];
    }
    while (len2 >= 0) {
        nums1[len--] = nums2[len2--];
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> num1 = {4,5,6,0,0,0};
    vector<int> num2 = {1,2,3};
    
    merge(num1,3,num2,3);
    
    std::cout << "Hello, World!\n";
    return 0;
}
