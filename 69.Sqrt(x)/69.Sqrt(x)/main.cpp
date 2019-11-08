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
    if(x < 2){
        return x ;
    }
    double left = 0;
    double right = x/2.0;
//    double right = x;
    double mid = (left + right)/2;
    while ((int)left<(int)right) {//可能因为double精度问题导致死循环。所以用int强转

        double sq = mid * mid;
        if (sq < x) {
            left = mid;
            mid = (left + right)/2;
        }else if(sq > x){
            right = mid;
            mid = (left + right)/2;
        }else{
            return mid;
        }
    }
    return mid;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << mySqrt(8) << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
