#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool prime(long n)
{
    if (n==2){
        return true;
    }
    if (n%2==0){
        return false;
    }
   long sqrtn=(long)sqrt((double)n);
   bool flag=true;
    for (long i = 3;i <= sqrtn;i += 2){
        if (n % i == 0) {
            flag = false;
        }
    }
    return flag;
}

int main(int argc, char const *argv[]) {
  int team[10000]={0};
  int k;
  int n;
  cin >> n;
  for(int i = 0 ; i < n; i++ ){
    cin >> k;
    if(i == 0) team[k]=3;
    else if(prime(i+1)) team[k] = 2;
    else team[k] = 1;
  }
  cin >> n;
  for(int i = 0 ; i < n; i++ ){
    cin >> k;
    if (team[k] == 3) {
      cout << setfill('0') << setw(4) << k <<": Mystery Award"<<endl;
      team[k] = -1;
    }
    else if (team[k] == 2) {
      cout << setfill('0') << setw(4) <<  k <<": Minion"<<endl;
      team[k] = -1;
    }
    else if (team[k] == 1) {
      cout << setfill('0') << setw(4) <<  k <<": Chocolate"<<endl;
      team[k] = -1;
    }
    else if (team[k] == 0) {
      cout << setfill('0') << setw(4) <<  k <<": Are you kidding?"<<endl;
    }
    else if (team[k] == -1) {
      cout << setfill('0') << setw(4) <<  k <<": Checked"<<endl;
      team[k] = -1;
    }
  }

  return 0;
}
