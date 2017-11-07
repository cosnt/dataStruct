typedef struct OneWayNode{
  int data;
  struct OneWayNode *next;
  OneWayNode(int data, OneWayNode *ptr = nullptr){
    this.data = data;
    next = ptr;
  }
}Node;

typedef struct TwoWayNode{
  int data;
  struct TwoWayNode *prior, *next;
  TwoWayNode(int data, Nodes *ptrPrior = nullptr, Nodes *ptrNext = nullptr){
    data = this.data;
    prior = ptrPrior;
    next = ptrNext;
  }
}Noses;

class LinkList{
private:
  struct Node *head, *tail;
  int length;
public:
  LinkList(int list[], int &length);
  LinkList();
  int length();
  void initList();
  bool getElem(int &index, int &value);
  bool insert(int &index, int &value);
  bool del(int &index);
  bool modify(int &index, int &value);
  bool search(int &value);
  Node* merge(Node *link_1, Node *list_2);
}


class CircularLinKList(){
private:

public:
  int length();
  bool initList();
  int getElem();
  bool insert();
  bool del();
  bool modify();
  bool search();
  bool merge();
}

class DoubleLinkList(){
private:

public:
  int length();
  bool initList();
  int getElem();
  bool insert();
  bool del();
  bool modify();
  bool search();
  bool merge();
}
