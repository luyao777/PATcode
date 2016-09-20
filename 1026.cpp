#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]) {
  long a,b;
  long sec,min,hour;

  cin >> a >> b;
  if ((b - a) % 100 < 50) a = (b - a) / 100;
  else a = (b - a) / 100 + 1;

  sec = a % 60;
  a = a / 60;
  min = a % 60;
  hour = a / 60;

  if (hour < 10) cout << '0' << hour;
  else cout << hour;
  cout << ':';
  if (min < 10) cout << '0' << min;
  else cout << min;
  cout << ':';
  if (sec < 10) cout << '0' << sec;
  else cout << sec;


  return 0;
}
