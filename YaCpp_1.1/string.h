#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#pragma warning(disable:4996)
struct CppString {

	 
	explicit CppString(const char *str = "") 
		: size(strlen(str)) 	
		{
		char* x = new char[++size];
		strcpy(x, str);
		this->str = x;
	}

	size_t size;
	char *str;
};

