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

//Ç³¿½±´
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

//´«Í³Éî¿½±´
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
			str = new char[strlen(str) + 1];
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

