#include <iostream>
#include <cmath>
using namespace std;
struct LinkList
{
 int data;
 LinkList *next;
};

void creatlist(LinkList *&L,int n)
{
 int i;
 LinkList *p;
 L->next = NULL;
 for(i = 0;i < n-1; i++){
   cin >> L->data;
   p = (LinkList*)new(LinkList);
   p->next = NULL;
   L->next = p;
   L = p;
 }
  cin >> L->data;
}

void outlist(LinkList *&head){
  if(head->next != NULL) {
    cout << head->data << ' ';
    outlist(head->next);
  }
  else cout << head->data;
  return;
}

void changelist(LinkList *&head,int n,int m){
  LinkList *p;
  LinkList *tail;
  int i;
  p = head;
  tail = head;
  for(i = 0;i < ((n-1)-m%n); i++)  p = p->next;
  for(i = 0;i < n-1 ; i++)  tail = tail->next;

  tail->next = head;
  head = p->next;
  p->next = NULL;

}

int main(int argc, char const *argv[]) {
  int n,m;
  cin >> n >> m;
  int shu;
  LinkList *h;
  LinkList *head;
  h = (LinkList*)new(LinkList);
  head = h;
  creatlist(h,n);
  changelist(head,n,m);
  outlist(head);
  return 0;
}
