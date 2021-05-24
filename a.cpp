#include <iostream>
#include <vector>
using namespace std;
int f_r(int n)
{
  vector <int> A;
  while (n>0)
  {
      int r = n % 2, l=0;
      A.push_back(r);
      l+=n%2;
      n/=2;
  }
int k = A.size();
return A[k-1];
}
int main()
{
  int a, b, p, l, count, max, i;
  count =0;
  max=0;
  cin>>a>>b;
  for (i=a; i<=b;i++){
      p = abs(i);
      if ((p%2==0) && (l==5) && (p%10!=0)){
          count +=1;
          if(p>max) max =i;
      }
  }
  cout << count << ' ' << max;
  return 0;
}