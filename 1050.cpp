#include <iostream>
#include<cmath>
using namespace std;

int partition(int shu[],int left,int right){
  int low,high,pivot,t;
  pivot = shu[left];
  low = left-1;
  high = right+1;
  while(low+1!=high){
    if (shu[low+1]>= pivot) low++;
    else if(shu[high - 1] < pivot) high--;
    else{
      t=shu[low+1];
      shu[++low] = shu[high-1];
      shu[--high] = t;
    }
  }
  shu[left] = shu[low];
  shu[low] = pivot;
  return low;
}

void quicksort(int shu[],int left,int right){
  int dp;
  if(left < right){
  dp = partition(shu,left,right);
  quicksort(shu,left,dp-1);
  quicksort(shu,dp+1,right);
  }
}

int main(int argc, char const *argv[]) {
  int N,flag;
  int n,m,sqr,k;
  int shu[10000];
  int i,j;
  cin >> N;
  n = m = 0;
  sqr = sqrt(N);
  for( i = 0;i <= sqr;i++)
    if (i>n && N % i == 0) {
      n = i;
      m = N / n;
    }
  int a[m][n];
  for(i = 0;i < m;i++){
    for(j = 0; j < n; j++) a[i][j] = 0;
     }



  for(i = 0;i < N;i++) cin >> shu[i];
  quicksort(shu,0,N-1);//降序排列



  i = j = 0;
  k = -1; flag = 0;// flag is decide row or line
  while (k<N-1) {
    k++;
    a[i][j] = shu[k];
    if (a[i-1][j] != 0 && flag == 1) flag = 0;
    if(a[i][j+1] == 0 && flag == 0 && j < n-1) j++;
    else {
      flag = 1;
      if(a[i+1][j] == 0 && flag == 1 && i < m-1) i++;
      else{
        flag = 0;
        if(a[i][j-1] == 0 && flag == 0 && j > 0) j--;
        else{
          flag = 1;
          if(a[i-1][j] == 0 && flag == 1 && i > 0) i--;

        }
      }
    }
  }
  for(i = 0;i < m;i++){
    for(j = 0; j < n-1; j++) cout << a[i][j] << ' ';
    cout << a[i][n-1] << endl;
     }
  return 0;
}
