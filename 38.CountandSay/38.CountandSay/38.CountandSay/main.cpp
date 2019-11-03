//
//  main.cpp
//  38.CountandSay
//
//  Created by ozx on 2019/11/3.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>

using namespace std;

string countAndSay(int n) {
    string rts = "1";
    if (n == 1) {
        return "1";
    }
    
    string anlStr = countAndSay(n-1);
    int count = 1;
    string tmp = "";
    for (int i = 0; i < anlStr.length(); i++) {
        //if (i+1!=anlStr.length() && anlStr[i] == anlStr[i+1]) {
        //防止数组越界，C++中不检查数组越界，所以这个判断可以省略。
        if (anlStr[i] == anlStr[i+1]) {
            count++;
        }else{
            tmp += to_string(count) + anlStr[i];
            count = 1;
        }
    }
    return tmp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << countAndSay(6) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
