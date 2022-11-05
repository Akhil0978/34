#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	ifstream fin;
	fin.open("C:/File/abc1.txt");
	fout.open("C:/File/abc1.txt",ios::app);
	if(fin.is_open())
		fout<<"\n Writin to a file opened from program \n";
	cout<<"\n Data has been appended to file ";
	fin.close();
	fout.close();
return 0;
}
