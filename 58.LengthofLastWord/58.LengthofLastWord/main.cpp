//
//  main.cpp
//  58.LengthofLastWord
//
//  Created by ozx on 2019/11/3.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {

    int len = (int)s.length();
    int index = len - 1;
    while (index>=0 && s[index] == ' ') {
        index--;
    }
    if (index<0) {
        return 0;
    }
    len = index;
    while (index >=0 && s[index] != ' ') {
        index--;
    }
    return len - index;
}


int main(int argc, const char * argv[]) {
    cout << lengthOfLastWord("hellod world ") << endl;
    return 0;
}
