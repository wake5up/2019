#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

#if 0
void test()
{
	string s1;
	s1.push_back('w');
	s1.push_back('e');
	s1 += " are";
	string s2(" student ");
	s1 += s2;
	s1.append(2,'&');
	s1.append(" xihuan ");
	s1.append(3,'!');
	for (auto e : s1)
	{
		cout << e ;
	}
	cout << endl;
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it;
		it++;
	}
	cout << endl;
}
void reversestring(string &s)
{
	char* begin = (char*)s.c_str();
	char* end = begin + s.size() - 1;
	while (begin < end)
	{
		swap(*begin,*end);
		begin++;
		end--;
	}
}
int main()
{
	//test();
	string s1("hello world!");
	reversestring(s1);
	reverse(s1.begin(),s1.end());
	return 0;
}
#endif

#if 0
//浅拷贝
namespace ht
{
	class string
	{
	private:
		char* _str;
	public:
		string(char* str = "")
		{
			if (nullptr == str)
			{
				str = "";
			}
			_str = new char[strlen(str) + 1];
			strcpy(_str,str);
		}
		string(const string& s)
			:_str(s._str)
		{
		}
		string operator =(string& s)
		{
			_str = s._str;
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete _str;
				_str = nullptr;
			}
		}
	};
}
#endif

#if 0
//传统深拷贝
namespace ht
{
	class string
	{
	private:
		char* _str;
	public:
		string(char* str = "")
		{
			if (str == nullptr)
			{
				str = "";
			}
			_str = new char[strlen(str) + 1];
			strcpy(_str,str);
		}
		string(const string& s)
			:_str(new char[strlen(s._str)+1])
		{
			strcpy(_str,s._str);
		}
		string& operator=(string& s)
		{
			if (this != &s)
			{
				char* temp = new char[strlen(s._str) + 1];
				strcpy(temp,s._str);
				delete _str;
				_str = temp;
			}
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete _str;
				_str = nullptr;
			}
		}
	};
}

#endif
namespace ht
{
	class string
	{
	private:
		char* _str;
	public:
		string(char* str="")
		{
			if (str == nullptr)
			{
				str = "";
			}
			_str = new char[strlen(str) + 1];
			strcpy(_str,str);
		}
		string(const string& s)
			:_str(nullptr)
		{
			string temp(s._str);
			swap(_str,temp._str);
		}
		/*string& operator=(const string& s)
		{
			if (this != &s)
			{
				string temp = s._str;
				swap(_str,temp._str);
			}
			return *this;
		}*/
		string& operator=(string s)
		{
			swap(_str,s._str);
			return *this;
		}
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}
	};
}

//namespace bite
//{
//	class string
//	{
//	public:
//		string(char* str = "")
//		{
//			if (nullptr == str)
//				str = "";
//
//			// 申请空间
//			_str = new char[strlen(str) + 1];
//			_count = 1;
//			// 存放str中的字符
//			strcpy(_str, str);
//		}
//
//		string(string& s)
//			: _str(s._str)
//			, _count(++s._count)
//		{}
//
//		// s2 = s1;
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				// ...
//			}
//
//			return *this;
//		}
//
//		~string()
//		{
//			if (_str && 0 == --_count)
//			{
//				delete[] _str;
//				_str = nullptr;
//			}
//		}
//	private:
//		char* _str;
//		int _count;
//	};
//}

//namespace bite
//{
//	class string
//	{
//	public:
//		string(char* str = "")
//		{
//			if (nullptr == str)
//				str = "";
//
//			// 申请空间
//			_str = new char[strlen(str) + 1];
//			_count = 1;
//			// 存放str中的字符
//			strcpy(_str, str);
//		}
//
//		string(const string& s)
//			: _str(s._str)
//		{
//			++_count;
//		}
//
//		// s2 = s1;
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				// ...
//			}
//
//			return *this;
//		}
//
//		~string()
//		{
//			if (_str && 0 == --_count)
//			{
//				delete[] _str;
//				_str = nullptr;
//			}
//		}
//	private:
//		char* _str;
//		static int _count;
//	};
//
//	int string::_count = 0;
//}

#if 0
namespace ht
{
	class string
	{
	private :
		char* _str;
		int* _count;
	public :
		string(char* str="")
			: _count(new int(1))
			, _str(new char[strlen(str) + 1])
		{
			if (str == nullptr)
			{
				str = "";
			}
			
			strcpy(_str,str);
		}
		string(const string& s)
			:_str(s._str)
			, _count(s._count)
		{
			++(*_count);
		}
		string operator=(string& s)
		{
			if (this != &s)
			{
				if (0 == --(*_count))
				{
					delete[] _str;
					delete _count;
					_str = nullptr;
					_count = nullptr;
				}
				_str = s._str;
				_count = s._count;
				++(*_count);
			}
			return *this;
		}
		~string()
		{
			if (_str&&0 == --(*_count))
			{
				delete[] _str;
				delete _count;
				_str = nullptr;
				_count = nullptr;
			}
		}
		char& operator[](size_t index)
		{
			if ((*_count) > 1)
			{
				string temp(_str);
				this->swap(temp);
			}
			return _str[index];
		}
		void swap(string& s)
		{
			std::swap(_str,s._str);
			std::swap(_count,s._count);
		}
		const char& operator[](size_t index)const
		{
			return _str[index];
		}
	};
}
#endif

void TestString()
{
	ht::string s1("hello");
	ht::string s2(s1);
	ht::string s3("wrold");
	ht::string s4(s3);

	// s3不需要释放原来的资源，因为还有s4在用
	s3 = s1;

	// s4是最后使用资源的对象， 赋值期间必须释放原来的资源
	s4 = s1;

	/*s1[0] = 'H';
	char& rc = s1[1];
	rc = 'E';*/
}


int main()
{
	TestString();
	return 0;
}