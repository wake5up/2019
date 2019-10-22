#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<vector>
#include<assert.h>

#if 0
void TestVector()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	vector<int> v1(array, array + sizeof(array) / sizeof(array[0]));
	for (int i = 0; i<v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
int main()
{
	TestVector();
	return 0;
}
#endif
#if 0
void TestVector()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,0};
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		v.erase(it);
		it = v.begin();
		it++;
	}
	cout << endl;
	cout << v.size();
}
int main()
{
	TestVector();
	return 0;
}
#endif


namespace ht
{
	template<class T>
	class vector
	{
		typedef T* iterator;
	private:
		T* _start;
		T* _finish;
		T* _endofstorage;
	public:
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}
		vector(int n, const T& data)
			:_start(new T[n])
		{
			for (size_t i = 0; i < n; i++)
			{
				_start[i] = data;
				_finish = _start + n;
				_endofstorage = _finish;
			}
		}
		template <class Iterator>
		vector(Iterator first, Iterator last)
		{
			auto it = first;
			while (it != last)
			{
				++it;
				++n;
			}
			_start = new T[n];
			for (size_t i = 0; i < n; i++)
			{
				_start[i] = *first++;
			}
			_finish = _first + n;
			_endofstorage = _finish;
		}
		vector(const vector<T>& v)
		{
			vector();
			this = v._start;
		}
		vector<T>& operator=(const vector<T>& v);
		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}
		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		size_t size() const
		{
			return _finish - _start;
		}
		size_t capacity() const
		{
			return _endofstorage - _start;
		}
		bool empty()const
		{
			return _start == _finish;
		}
		void resize(size_t newsize, const T& data = T())
		{
			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize>capacity())
				reserve(newsize);

				for (; oldsize < newsize; oldsize++)
				{
					_start[oldsize] = data;
				}
			}
			_finish = _start + newsize;
		}
		void reserve(size_t newCapacity)
		{
			size_t oldCapacity = capacity();
			if (newCapacity > oldCapacity)
			{
				T* temp = new T[newCapacity];
				size_t n = size();
				if (_start)
				{
					for (size_t i = 0; i < n; i++)
					{
						temp[i] = _start[i];
					}
					delete[] _start;	
				}
				_start = temp;
				_finish = _start + n;
				_endofstorage = _start + newCapacity;
			}
		}

		T& operator[](size_t index)
		{
			assert(index < size());
			return _start[index];
		}
		const T& operator[](size_t index)const
		{
			assert(index < size());
			return _start[index];
		}
		T& front()
		{
			return *_start;
		}
		const T& front()const
		{
			return *_start;
		}
		T& back()
		{
			return *(_finish-1);
		}
		const T& back()const
		{
			return *(_finish-1);
		}
		void push_back(const T& data)
		{
			if (_finish == _endofstorage)
			{
				reserve(capacity()*2+3);
			}
			*_finish++ = data;
		}
		void pop_back()
		{
			--_finish;
		}
		iterator insert(iterator pos, const T& data)
		{
			if (_finish == _endofstorage)
				reserve(capacity()*2+3);

			auto it=_finish-1;
			while (it != pos)
			{
				*(it + 1) = *it;
				it--;
			}
			*pos = data;
			++_finish;
			return pos;
		}
		iterator erase(iterator pos)
		{
			if (pos == end())
				return pos;

			auto it = pos + 1;
			while (it != _finish)
			{
				*(it - 1) = *it;
				it++;
			}
			--_finish;
			return pos;
		}
		void clear()
		{
			_finish = _start;
		}
	};
}
void TestVector()
{
	ht::vector<int> v1;
	ht::vector<int> v2(10, 5);

	int array[] = { 1, 2, 3, 4, 5 };
	ht::vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));

	cout << v2.size() << endl;
	cout << v2.capacity() << endl;
	cout << v3.front() << endl;
	cout << v3.back() << endl;

	for (size_t i = 0; i < v3.size(); ++i)
		cout << v3[i] << " ";
	cout << endl;

	ht::vector<int>::iterator it = v3.begin();
	auto it = v3.begin();
	while (it != v3.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto& e : v3)
		e *= 2;

	for (auto e : v3)
		cout << e << " ";
	cout << endl;
}
