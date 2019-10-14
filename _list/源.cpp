#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#include<list>
#include<vector>

void Test1()
{
	list<int> L1;
	list<int> L2(10, 5);
	vector<int> v{1,2,3,4};
	list<int> L3(v.begin(),v.end());
	list<int> L4(L3);

	cout << L1.size() << endl;
	auto it = L2.begin();
	while (it != L2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : L3)
	{
		cout << e << " ";
	}
	cout << endl;

	auto rit = L4.rbegin();
	while (rit != L4.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
}

void Test2()
{
	list<int> L;
	L.push_back(1);
	L.push_back(2);
	L.push_back(3);
	L.push_back(4);
	L.push_front(0);
	L.pop_back();
	for (auto e : L)
	{
		cout << e << " ";
	}
	cout << endl;

	auto it = find(L.begin(),L.end(),3);
	if (it != L.end())
	{
		L.insert(it,7);
	}
	L.erase(it);
	auto it1 = L.begin();
	while (it1 != L.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;
}

bool OK(int data)
{
	if (0 == data % 2)
	{
		return true;
	}
	return false;
}
void Test3()
{
	list<int> L = {1,2,3,4,5,6,7,8,3};
	L.sort();
	L.unique();
	L.remove(3);
	for (auto e : L)
	{
		cout << e << " ";
	}
	cout << endl;
	L.remove_if(OK);
	list<int>::iterator it = L.begin();
	while (it != L.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

void TestIterator()
{
	list<int> L{1,2,3,4};
	list<int>::iterator it = L.begin();
	L.erase(it);
	it=L.begin();
	while (it != L.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
int main()
{
	//Test1();
	//Test2();
	//Test3();
	TestIterator();
	return 0;
}