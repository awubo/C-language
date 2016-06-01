#include<iostream>
using namespace std;
#include<fstream>

class CStr{
private:
	char sData[256];
public:
	CStr(char *s);
	CStr(const CStr &s);
	char *get(void);
	int getlength(void);
	void cpy(char *s);
	void cat(char *s);
};
