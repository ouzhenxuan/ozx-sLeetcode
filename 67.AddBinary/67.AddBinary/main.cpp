//
//  main.cpp
//  67.AddBinary
//
//  Created by ozx on 2019/11/7.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>

using namespace std;



string addBinary(string a, string b) {

    string ansStr ;
    int c = 0;
    for (int i = (int)a.size()-1, j = (int)b.size()-1; i>=0 || j >= 0; i--,j--) {
        int one = (i >= 0 ? a[i] : '0') - '0';
        int two = (j >= 0 ? b[j] : '0') - '0';
        
        int ans = one + two + c;
        
        int out = ans % 2;
        c = ans/2;
        ansStr.insert(ansStr.begin(), out + '0');
    }
    
    if (c > 0) {
        ansStr.insert(ansStr.begin(), '1');
    }
    
    return ansStr;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << addBinary("1010","1011") << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
