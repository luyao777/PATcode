#include <iostream>
using namespace std;
class lu{
public:
  int max;
  int min;
  int data;
};
int main(int argc, char const *argv[]) {
  lu a[100001];
  int n,i;
  int sum = 0;
  int k;
  cin >> n;
  if( n == 1) {
    cin >> k;
    cout << 1 << endl << k;
    return 0;
  }
  for(i=0;i<n;i++){
    cin >> a[i].data;
  }
  a[0].max = a[0].data;
  a[0].min = 0;
  a[n-1].min = a[n-1].data;
  a[n-1].max = 1000000001;

  for(i=1;i<n-1;i++){
    if(a[i].data > a[i-1].max) a[i].max = a[i].data;
    else a[i].max = a[i-1].max;
  }
  for(i=n-2;i>0;i--){
    if(a[i].data < a[i+1].min) a[i].min = a[i].data;
    else a[i].min = a[i+1].min;
  }
//for(i=0;i<n;i++) cout << "min : "<< a[i].min << " data :"<< a[i].data <<" max :"<< a[i].max << endl;;




  for(i=1;i<n-1;i++) if(a[i-1].max < a[i].data && a[i].data < a[i+1].min) sum++;
  if(a[0].data < a[1].min) sum++;
  if(a[n-1].data > a[n-2].max) sum++;
  cout << sum << endl;


  if(a[0].data < a[1].min) k = 0;
  else for(i=1;i<n-1;i++) if(a[i-1].max < a[i].data && a[i].data <a[i+1].max){
    k = i;
    break;
  }
  cout << a[k].data;
  for(i=k+1;i<n-1;i++) if(a[i-1].max < a[i].data && a[i].data < a[i+1].min) cout << ' ' << a[i].data;
  if(a[n-1].data > a[n-2].max) cout << ' ' << a[n-1].data;

  return 0;
}
