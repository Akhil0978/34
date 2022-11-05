#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("C:/File/abc.txt");

	if(fout)
	{
		cout<<"file created Sucessfully";
	}
	else
	{
		cout<<"file not Created ";
	}
return 0;
}
