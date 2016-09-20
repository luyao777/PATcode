#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
  float r1,p1,r2,p2;
  float a,b;
  float r,p;
  cin >> r1 >> p1 >> r2 >> p2;
  r = r1 * r2;
  p = p1 + p2;
  a = r * cos(p);
  b = r * sin(p);
  if (a == -0) a = 0;
  cout<<setiosflags(ios::fixed)<<setprecision(2) << a;
  if(b >= 0)  cout << '+';
  cout<<setiosflags(ios::fixed)<<setprecision(2) << b <<'i';
  return 0;
}
