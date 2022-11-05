#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("C:/File/abc1.txt");
	ofstream fout;
	fout.open("C:/File/second.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch>=97 && ch<=90)
		{
			ch=toupper(ch);
		}
		else if(ch>=65 && ch<=90)
		{
			ch=tolower(ch);
		}
		fout<<ch;
	}
	cout<<"\n Data has been Copied ";
	fin.close();
	fout.close();
return 0;
}
