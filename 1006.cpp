#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int a;
  cin >> a;
  for (int i = 0; i < a / 100; i++)  cout << 'B';
  for (int i = 0; i < (a / 10) % 10; i++)  cout << 'S';
  for (int i = 0; i < (a % 10); i++)  cout << i+1 ;
  return 0;
}
