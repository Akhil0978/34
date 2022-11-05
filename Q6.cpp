#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int character = 0, word = 1, line = 0;
    char ch;
    ifstream fin;
    fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt");
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch == ' ')
            word++;
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
            character++;
        else if (ch == '\n')
            line++;
    }
    cout << "No of characters are: " << character << endl;
    cout << "No of words are: " << word << endl;
    cout << "No of lines are: " << line << endl;
    fin.close();
    return 0;
