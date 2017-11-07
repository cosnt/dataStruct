typedef struct Node{
  int data;
  Node *next;
  Node(int value, Node *ptr = nullptr){
    data = value;
    next = ptr;
  }
}Node;



class CircularLinkList{
private:
  Node *head, *tail;
  int length;
public:
  CircularLinkList();
  CircularLinkList(int &list[], int length);
  void initList();
  ~CircularLinkList();
  void initList();
  int getElem(int &index, int &value);
  void insert(int &index, int &value);
  bool del(int &index);
  bool modify(int &index, int &value);
  int search(int &value);
  Node* merge(Node *link_1, Node *list_2);
};
