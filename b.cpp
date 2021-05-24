#include <iostream>
#include <cmath>
 
bool isPrime(int num)
{
  if(num < 2) { return false; }
  if(num == 2) { return true; }
  if(num % 2 == 0) { return false; }
  for(int i = 3; i <= sqrt(num); i += 2)
  {
    if(num % i == 0) { return false; }
  }
  return true;
}
 
int main()
{
    int a, b, i;
    std::cin >> a >> b;
     int sqr_v;
    for(int i = a; i<=b; i+=2)
    {
          sqr_v = sqrt(i/2);
          if ( sqr_v*sqr_v == i/2 )
              if ( isPrime(sqr_v) )
                  std::cout<<i<<std::endl;
    }
   return 0;
}