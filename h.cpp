#include <bits/stdc++.h>
#include <string>
using namespace std;

int n() {
  int k = 0;
  for (;;) {
    char c = cin.get();
    if (c >= '0' && c <= '9')
      k = k * 10 + c - '0';
    else {
      cin.putback(c);
      return k;
    }
  }
}
int e();
 
int s() {
  char c = cin.get();
  if (c == '(') {
    int x = e();
    cin.get();
    return x;
  } else {
    cin.putback(c);
    return n();
  }
}
 
int f() {
  int x = s();
  for (;;) {
    char c = cin.get();
    switch (c) {
    case '*':
      x *= s();
      break;
    case '/':
      x /= s();
      break;
    default:
      cin.putback(c);
      return x;
    }
  }
}
 
int e() {
  int x = f();
  for (;;) {
    char c = cin.get();
    switch (c) {
    case '+':
      x += f();
      break;
    case '-':
      x -= f();
      break;
    default:
      cin.putback(c);
      return x;
    }
  }
}
 
 
main() {
  int k = e();
  cout << k ;
}

