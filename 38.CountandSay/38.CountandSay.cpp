// 38.CountandSay.cpp: 定义应用程序的入口点。
//

#include "38.CountandSay.h"
#include <map>
#include <string> 

using namespace std;

string countAndSay(int n) {
	if (n == 1)
		return "1";
	string laststr = countAndSay(n - 1);  //通过调用该函数得到上一次的字符串
	string curstr;
	int count = 1;
	for (int i = 0; laststr[i] != '\0'; i++)
	{

		if (laststr[i] == laststr[i + 1])
		{
			count++;
			continue;
		}
		else
		{
			curstr += to_string(count) + laststr[i];
			count = 1;    //对下一个元素重新计数
		}
	}
	return curstr;

}

int main()
{
	cout << countAndSay(6) << endl;
	cout << "Hello CMake。" << endl;
	return 0;
}
