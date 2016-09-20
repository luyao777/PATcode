#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,temp,sum = 0,j = 0;
  int flag = 1;
  char ch[18];
  char h[11]={'1','0','X','9','8','7','6','5','4','3','2'};
  int k[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  cin >> n;
  for(int i = 0; i < n; i++){
    sum = 0;
    cin >> ch;
    for(j = 0; j < 17; j++){
      if ((ch[j] != '0') && (ch[j] != '1') && (ch[j] != '2') && (ch[j] != '3') && (ch[j] != '4') && (ch[j] != '5')
      && (ch[j] != '6') && (ch[j] != '7') && (ch[j] != '8') && (ch[j] != '9'))  {
        flag = 0;
        cout << ch << endl;
        break;
     }
      temp = int(ch[j]) - 48;
      sum = temp * k[j] + sum;
    }
    if (j < 17) {
      continue;
    }
    sum = sum % 11;

    if (h[sum] == ch[17]) {
      continue;
    }
    else {
      flag = 0;
      cout << ch << endl;
   }
 }
  if(flag == 1) cout << "All passed";
  return 0;
}
