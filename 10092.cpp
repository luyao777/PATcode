#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char ch[80];
  int a[80]={0};
  int k = 0;
  int flag1 = 0, flag2 = 1;
  cin.getline(ch,80);
  for (int m = 0; m < strlen(ch) ; m++)
  {
  if (ch[m] == ' ') {
    flag1 = 0;
  }
  else {
    if (flag1 != flag2){
      a[k] = m;
      k++;
    }
    flag1 = 1;
  }
}
  for (int m = k-1; m > 0 ; m--) {
    while(ch[a[m]] != ' ' && ch[a[m]] != '\0' && a[m] < strlen(ch))  {
      cout << ch[a[m]];
      a[m]++;
    }
    cout << ' ';
  }
    while(ch[a[0]] != ' ' && ch[a[0]] != '\0' && a[0] < strlen(ch))  {
      cout << ch[a[0]];
      a[0]++;
    }
  return 0;
}
