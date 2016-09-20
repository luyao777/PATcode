#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]) {
  char ch[100000];
  int na,nb;
  int sum = 0;
  na = nb = 0;

  cin >> ch;
  for(int i = 0;i < strlen(ch);i++)
  {
    if (ch[i] == 'P') na++;
    if (ch[i] == 'A') nb = nb + na;
    if (ch[i] == 'T') sum = (sum + nb) % 1000000007;
  }
  cout << sum;
  return 0;
}
