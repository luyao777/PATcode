#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,p = 0;
  int num,pscore,tscore;
  int maxt = 0;
  char ch;
  int k[1000] = {0};
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num >> ch >> pscore >> tscore;
    k[num] = k[num] + tscore;
  }
  for (int i = 0; i < 1000; i++)  if (k[i] > maxt) {
    maxt = k[i];
    p = i;
  }
  cout << p << ' ' << k[p];

  return 0;
}
