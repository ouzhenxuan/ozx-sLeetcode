//
//  main.cpp
//  70.ClimbingStairs
//
//  Created by ozx on 2019/11/10.
//  Copyright © 2019 ozx. All rights reserved.
//

#include <iostream>

#include <map>
#include <iterator>

using namespace std;

map<int,int> indexMap ;
map<int, int>::iterator iter;

int climbStairs(int n) {
    iter = indexMap.find(n);
    if (iter != indexMap.end()) {
        return iter->second;
    }
    if (n <= 1) {
        return 1;
    }else{
        
        int nValue = climbStairs(n - 1) + climbStairs(n-2);
        indexMap.insert(pair<int , int>(n,nValue));
        return nValue;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << climbStairs(44) << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
