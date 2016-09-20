#include <iostream>
using namespace std;

int ch2num(char ch){
  return (int(ch)-48);
}
char num2ch(int n){
  return char(n+48);
}

int main(int argc, char const *argv[]) {
  char ch[1000];
  int k,p = 0;
  int m,n;
  int flag = 0;
  int i = 0;
  cin >> ch;
  cin >> k;
  while(ch[i] != '\0')
  {
    m = ch2num(ch[i]);
    if (10 * p + m < k)
    {
      p = 10 * p + m;
      if(flag == 1) cout << '0';
      i++;
      continue;
    }
    else {
      n = (10 * p + m) / k;
      cout << num2ch(n);
      flag = 1;
      p = (10 * p + m) % k;
      i++;
    }
  }
    if(flag == 0) cout << 0; //有毒。。。  4/7  商得输出一个0  the output should be 0
    cout << ' ' << p;


  return 0;
}
