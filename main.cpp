//Problem 0 sheet 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string text;
    getline(cin,text);
    vector<char> t1;
    for(int i=0; i<text.length(); i++)
    {
        text[i]=tolower(text[i]);
        text[0]=toupper(text[0]);
        if(text[i]==' ' && text[i+1]==' ')
        {
            continue;
        }

        t1.push_back(text[i]);
    }
    for(int i=0; i<text.length(); i++)
    {
        cout<<t1[i];
        if(t1[i]=='.')
            break;
    }
}
