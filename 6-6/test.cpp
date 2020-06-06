#include <iostream>
using namespace std;

//char Func(char x, char y){
//	if (x < y)
//		return x;
//	return y;
//
//}
//int main(){
//	int a = '1';
//	int b = '1';
//	int c = '2';
//	cout << Func(Func(a, b), Func(b, c)) << endl;
//	getchar();
//	return 0;
//}
int max_cake()
{
	int w;//长(列)
	int h;//宽(行)
	cin >> w >> h;
	int count = 0;

	vector<vector<int>> vv;
	vv.resize(h);//vv有h行

	for (auto& e : vv)
	{
		e.resize(w, 1);//每个小vector有w列，即h*w的二维数组(初始化为1)
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (vv[i][j] == 1)
			{
				count++;

				//与这一行距离是2的行不能有(列不变)
				if (i + 2 < h)
				{
					vv[i + 2][j] = 0;
				}

				//与这一列距离是2的列不能有(行不变)
				if (j + 2 < w)
				{
					vv[i][j + 2] = 0;
				}
			}
		}
	}
	return count;
}