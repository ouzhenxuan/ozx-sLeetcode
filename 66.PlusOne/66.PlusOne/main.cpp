//
//  main.cpp
//  66.PlusOne
//
//  Created by ozx on 2019/11/3.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    
    for (int i = (int)digits.size()-1; i>=0; i--) {

        if (digits[i] == 9) {
            digits[i] = 0;
        }else{
            digits[i]++;
            break;
        }
    }

    if (digits[0] == 0) {
        digits.push_back(0);
        digits[0] = 1;
    }
    return digits;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> iii = {9,9,9};
//    vector<int> iii = {9,8};
    
    vector<int> jjj =  plusOne(iii);
    for( int var : jjj){
        cout << var << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
