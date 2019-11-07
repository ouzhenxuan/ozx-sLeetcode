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
    
    int c  = 0;
    for (int i = (int)digits.size()-1; i>=0; i--) {
        digits[i] += 1 ;
        c = digits[i]/10;
        
        digits[i] = digits[i]%10;
        
        if (c == 0) {
            break;
        }
    }

    if (c != 0) {
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> iii = {9};
    
    vector<int> jjj =  plusOne(iii);
    for( int var : jjj){
        cout << var << endl;
    }
    
    std::cout << "Hello, World!\n";
    return 0;
}
