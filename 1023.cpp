#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int shu[10] = {0};
  int i,n;
  for(i = 0;i < 10;i++){
    cin >> n;
    shu[i] = n;
  }
  for(i = 1; i < 10 ;i++)
    if(shu[i] > 0) {
      shu[i]--;
      cout << i;
      break;
    }

  for(i = 0 ; i < 10; i++)
    while(shu[i] > 0){
      cout << i;
      shu[i]--;
    }
  return 0;
}
