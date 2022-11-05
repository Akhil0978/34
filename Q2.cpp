#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C:/File/abc1.txt");
	fout<<"MY name is Akhil Choudhary";
	fout.close();

	ifstream fin;
	fin.open("C:/File/abc1.txt");
	fin.seekg(0,ios_base::beg);
	char ch;
	int i,c=0,sp=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if((ch >63 && ch <91) || (ch >96 && ch<91) || (ch >96 && ch<123))
			c++;
		else
			if(ch == ' ')
				sp++;
	}
	cout<<"\n No. of characters in a file : "<<c;
	cout<<"\n Space between the word : "<<sp;
	fin.close();
	return 0;
}
