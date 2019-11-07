//
//  main.cpp
//  69.Sqrt(x)
//
//  Created by ozx on 2019/11/7.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>

using namespace std;


/*
 /// 牛顿法
 /// @param n 要开方的数
int num ;
double calSqrt(double n){
    double res = (n + num/n) / 2;
    if (res == n) {
        return res;
    }else{
        return calSqrt(res);
    }
}

int mySqrt(int x) {
 
    if (x == 0 ) {
        return 0;
    }else{
        num = x ;
        return calSqrt(x);
    }
}
*/



/// 二分查找
/// @param x 开方数
int mySqrt(int x) {
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << mySqrt(8) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
