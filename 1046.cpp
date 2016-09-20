#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int a0,b0,a1,b1,a,b;
  cin >> n;
  a = b = 0;
  for (int i = 0; i < n; i++) {
    cin >> a0 >> a1 >> b0 >> b1;
    if(a1 == a0 + b0 && b1 == a0 + b0) ;
    else if(a1 == a0 + b0) a++;
    else if(b1 == a0 + b0) b++;
  }
  cout << b << ' ' << a;

  return 0;
}
