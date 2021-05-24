#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   char ch;
float A[100], B[]={5, 3, 4, 2, 1};
int state=0, i=0, j=0, exp=0;
int t=0;
ifstream in ("input.txt");
while (!in.eof())
{
  switch (state)
{	case 0:
{	in>>ch;
if (ch=='*')
{	state=1;
break;
}
if (ch=='/')
{	state=2;
break;
}
if (ch=='+')
{	state=3;
break;
}
if (ch=='-')
{	state=4;
break;
}
A[i]=B[i];
i++;
break;
}
case 1:
{	A[t+1]*=A[t];
t++;
state=0;
break;
}
case 2:
{	A[t+1]=A[t]/A[t+1];
t++;
state=0;
break;
}
case 3:
{	A[t+1]+=A[t];
t++;
   state=0;
   break;
}
case 4:
{	A[t+1]=A[t]-A[t+1];
t++;
state=0;
break;	
}	}	}
in.close();
ofstream out ("output.txt");
out<<A[t];
out.close();
return 0;
}