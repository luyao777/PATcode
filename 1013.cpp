#include <iostream>
#include <cmath>
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
  int a,b;
  int i = 1;
  int shu[10000];
  long k = 1;
  cin >> a >> b;
  while(i <= b)
  {
    k++;
    if(prime(k)) {
      shu[i] = k;
      i++;
    }
  }
  for(i = a ; i <= b ; i++){
    if((i - a) % 10 == 9) cout << shu[i] << endl;
    else if (i == b) cout << shu[i];
    else  cout << shu[i] << ' ';
  }
  return 0;
}
