
#include <iostream>
using namespace std;
struct stu{
  int num;
  int de;
  int cai;
  int sum;
  bool lflag; // 是否及格
  bool hflag; // 是否优秀
  bool dhflag;  //是否德胜才 德优
  bool dlflag;//是否 德胜才  德及格
}a[100000];
int N,L,H;
int i,sum = 0;

 struct cj{
   stu data;
   struct cj *next;
 }*head,*p,*q;

//各项德才指标相同下的比较
bool maxsum(stu a,stu b){
  if(a.sum > b.sum) return true;
  else if (a.sum < b.sum) return false;
  else {
    if(a.de > b.de) return true;
    else if (a.de < b.de) return false;
    else{
      if(a.num < b.num) return true;  //升序输出
      else return false;
    }
  }
}

//比较函数，选出指标最优的数据
bool operator > (stu a,stu b){
  if(a.hflag > b.hflag) return true;
  else if(a.hflag < b.hflag) return false;
  else if (a.hflag == 1) return maxsum(a,b);
  else{
    if(a.dhflag > b.dhflag) return true;
    else if(a.dhflag < b.dhflag) return false;
    else if (a.dhflag == 1) return maxsum(a,b);
    else{
      if(a.dlflag > b.dlflag) return true;
      else if(a.dlflag < b.dlflag) return false;
      else return maxsum(a,b);
    }
  }
}
void insert(stu a){
  q = head;
  p->data = a;
  p->next = NULL;
  if(a > head->data) {
    head->data = a;
    head->next = q;
  }
  else {
    while(q->next->data > a && q->next != NULL) q = q->next;
    q->next = p;
    p->next = q->next;
  }
}



//读取元素并且给各个标志位赋值
void readdata(void){
  int i;
  for(i = 0; i < N; i++) {
    cin >> a[i].num >> a[i].de >> a[i].cai;
    if(a[i].de < L || a[i].cai < L) {
      a[i].lflag = 0;
      continue;
    }
    else {
      sum++;
      a[i].sum = a[i].de + a[i].cai;
      a[i].lflag = 1;

      if(a[i].de >= H && a[i].cai >= H) a[i].hflag = 1;
      else a[i].hflag = 0;

      if(a[i].de >= H) a[i].dhflag = 1;
      else a[i].dhflag = 0;

      if(a[i].de > a[i].cai) a[i].dlflag = 1;
      else a[i].dlflag = 0;
      if(sum == 1) {
        head->data = a[i];
        head->next = NULL;
      }
      else insert(a[i]);

    }

  }
}
/
void out (cj *head){
  while(N > 0) {
     cout << head->data.num <<' '<< head->data.de << ' ' <<head->data.cai << endl;
     head = head->next;
  }
}


/*
//符号需要修改,快速排序
int partition(stu arr[], int low, int high){
    stu key;
    key = arr[low];
    while(low<high){
        while(low <high && key >arr[high] )
            high--;
        if(low<high)
            arr[low++] = arr[high];
        while( low<high &&  arr[low] > key )
            low++;
        if(low<high)
            arr[high--] = arr[low];
    }
    arr[low] = key;
    return low;
}

void quick_sort(stu arr[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}
*/

int main(int argc, char const *argv[]) {

  cin >> N >> L >> H;
  readdata();
// 输出总数
  cout << sum << endl;
//排序
//  quick_sort(a,0,N-1);

//  out(head);
//  for(i = 0;i < sum;i++)   cout << a[i].num <<' '<< a[i].de << ' ' << a[i].cai << endl;


  return 0;
}
