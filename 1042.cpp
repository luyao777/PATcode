#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a[128]={0};
  int i = 0,k,max = 0;
  char ch;
  ch = getchar();
  while (ch != '\n') {
    a[int(ch)]++;
    ch = getchar();
  }
  for(i = 97; i < 123; i++)
    if(a[i] + a[i - 32] > max){
      max = a[i] + a[i - 32];
      k = i;
    }

  cout << char(k) << ' ' << a[k] + a[k - 32];
  return 0;
}
