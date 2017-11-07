//think about allocate memery
class ArrayStack{
private:
  int top;
  int *stack;
  int max_size;
public:
  ArrayStack(int length);
  bool initStack();
  bool push(int &value);
  bool pop();
  bool isEmpty();
  bool isFull();
};

typedef struct Node{
  int data;
  struct Node *next;
  Node(int value, Node *ptr = nullptr){
    data = value;
    next = ptr->next;
  }
}Node;

class LinkStack{
private:
  Node  *head;
public:
  LinkStack();
  ~LinkStack();
  void initStack();
  void push(int &value);
  bool pop();
  bool isEmpty();
};
