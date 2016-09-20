#include<iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int sum = 1;
  int i = 3; int p;
  char ch;
  int flag = 1;
  cin >> n >> ch;
  while(sum <= n){
    sum = sum + 2*i;
    i = i + 2 ;
  }

  i = i-2;
  sum = sum - 2 * i;
  i = i - 2;
  p = i;

  for( int j = 0 ; j < p ; j++){
    for(int k = 0; k < (p-i)/2 ; k++) cout<<' ';
    for(int k = 0; k < i ; k++) cout<<ch;
//    for(int k = 0; k < (p-i)/2 ; k++) cout<<' ';
    cout << endl;
    if(i - 2 > 0 && flag == 1) i = i-2;
    else {
      flag = 0;
      i = i + 2;
    }

  }


  cout << n - sum;
  return 0;
}
