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
	int w;//��(��)
	int h;//��(��)
	cin >> w >> h;
	int count = 0;

	vector<vector<int>> vv;
	vv.resize(h);//vv��h��

	for (auto& e : vv)
	{
		e.resize(w, 1);//ÿ��Сvector��w�У���h*w�Ķ�ά����(��ʼ��Ϊ1)
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (vv[i][j] == 1)
			{
				count++;

				//����һ�о�����2���в�����(�в���)
				if (i + 2 < h)
				{
					vv[i + 2][j] = 0;
				}

				//����һ�о�����2���в�����(�в���)
				if (j + 2 < w)
				{
					vv[i][j + 2] = 0;
				}
			}
		}
	}
	return count;
}