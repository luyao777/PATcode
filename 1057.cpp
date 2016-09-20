#include<iostream>
#include<string.h>
using namespace std;
long a = 0,b = 0;
void bit2(long n){
  if ( n == 0 ) return;
  bit2( n / 2);
  if(n % 2 == 0) a++;
  else b++;
  return;
}
int main(int argc, char const *argv[]) {
  char ch[100001];
  long sum = 0;
  int chn;
  int i = 0;
  cin.getline(ch,100001);
  while(i != strlen(ch)){
    chn = int(ch[i]);
    if (64 < chn && chn < 91) sum = sum + chn - 64;
    else if (96 < chn && chn < 123) sum = sum + chn - 96;
    i++;
  }
  bit2(sum);
  cout << a << ' ' << b << endl;
  return 0;
}
