#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  char shu[1000]={'a'};
  int k[10]={0};
  cin >> shu;
  for(int i = 0 ; i < 1000 ; i++)
  {
    switch (shu[i]) {
      case '0': k[0]++; break;
      case '1': k[1]++; break;
      case '2': k[2]++; break;
      case '3': k[3]++; break;
      case '4': k[4]++; break;
      case '5': k[5]++; break;
      case '6': k[6]++; break;
      case '7': k[7]++; break;
      case '8': k[8]++; break;
      case '9': k[9]++; break;
      default :break;
    }
  }
 for (int i = 0; i < 10; i++){
   if (k[i] != 0) cout << i << ':' << k[i] << endl;
 }
  return 0;
}
