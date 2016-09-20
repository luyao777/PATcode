#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int a[100000] = {0};
  int i,n,k;
  cin >> n;
  for(i = 0;i < n;i++){
    cin >> k;
    a[k]++;
  }
  cin >> n;
  for(i = 0;i < n-1;i++){
    cin >> k;
    cout << a[k] << ' ';
  }
  cin >> k;
  cout << a[k];
  return 0;
}
