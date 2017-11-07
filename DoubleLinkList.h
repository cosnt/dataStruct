typedef Node{
  int data;
  Node *next, *front;
  Node(int value, Node *ptr1 = nullptr, Node *ptr2 = nullptr){
    data = value;
    next = ptr1;
    front = ptr2;
  }
}Node;

typedef HeadNode{
  Node *next, *front;
  Node(Node *ptr1 = nullptr, Node *ptr2 = nullptr){
    next = ptr1;
    front = ptr2;
  }
}HeadNode;


class DoubleLinkList(){
private:
HeadNode *head;
int length;
public:
  DoubleLinkList();
  DoubleLinkList(int list[], int length);
  bool isEmpty();
  bool initList();
  int getElem();
  bool insert();
  bool del();
  bool modify();
  bool search();
  bool merge();
}
