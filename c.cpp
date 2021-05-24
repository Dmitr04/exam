#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in ("input.txt");
    string b, c;
    int n;
    getline(in,b);
    int max=1;
    int cur=1;
    n=0;
    for (int i=1; i<=b.length(); i++)
    {
        if (b[i]==b[i-1])
        {
            cur++;
            if (cur>max)
            {
                max=cur;
                c=b[i];
            }
        }
        else
        {
            cur=1;
        }
    }
cout<< max << ' ' << c;
}