#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char ch[10000];
  int a[6] = {0};
  int n;
  char b[7] = "PATest";
  cin >> ch;
  n = strlen(ch);
  for(int i = 0; i < n; i++){
    switch (ch[i]) {
      case 'P': a[0]++; break;
      case 'A': a[1]++; break;
      case 'T': a[2]++; break;
      case 'e': a[3]++; break;
      case 's': a[4]++; break;
      case 't': a[5]++; break;
      default: ;
    }
  }
  while (a[0]!=0 || a[1]!=0 || a[2]!=0 || a[3]!=0 || a[4]!=0 || a[5]!=0) {
    for(int i = 0; i < 6; i++){
      if(a[i] == 0) continue;
      else {
        a[i]--;
        cout << b[i];
      }
    }

  }

  return 0;
}
