#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,k=0;
  int shu[10]={0};
  int sum[100]={0};

  cin >> n;
  for (int i = 0 ; i < n; i++)  cin >> shu[i];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < i; j++){
      sum[k] = shu[i] * 10 + shu[j];
      sum[99 - k] = shu[i] + shu[j] * 10;
      k++;
    }

  n = 0;
  for(int i = 0; i < 100; i++) n = n + sum[i];
  cout << n;

  return 0;
}
