#include <iostream>
using namespace std;
struct  stu{
  char num[14];
  int Jnum;
  int Knum;
};
int main(int argc, char const *argv[]) {
  stu usr[1000];
  int n,i,j,t,k;
  cin >> n;
  for(i = 0; i < n; i++) cin >> usr[i].num >> usr[i].Jnum >> usr[i].Knum;
  cin >> k;
  for(j = 0; j < k; j++) {
    cin >> t;
    for(i = 0; i < n; i++) if(usr[i].Jnum == t) {
      cout << usr[i].num << ' ' << usr[i].Knum << endl;
      break;
    }
  }
  return 0;
}
