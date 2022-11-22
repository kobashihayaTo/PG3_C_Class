#include <stdlib.h>//system
#include <vector>//vector
#include <iostream>//cout  endl
#include <string>//string
using namespace std;

int main() 
{
	//vector<int> b;//int型を入れる伸び縮み配列

	//b.push_back(40);
	//b.push_back(50);
	//b.push_back(77);

	//int size = b.size();
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", b[i]);
	//}
	//printf("---\n");

	//b.pop_back();
	//size = b.size();
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", b[i]);
	//}


	//vector<int>e = { 1,2,3 };

	//vector<int>::iterator it;

	//it = e.begin();

	//cout << *it << endl;

	//it++;

	//cout << *it << endl;

	//for (it = e.begin(); it != e.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	vector<string>f = { "ローソン","ファミマ","セブン" };

	for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++)//全要素をを順にたどる
	{
		cout << *it_f << endl;
	}

	cout << "---" << endl;

	f.erase(f.begin() + 1);
	for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++)//全要素をを順にたどる
	{
		cout << *it_f << endl;
	}


	system("pause");
	return 0;
}