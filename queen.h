class ArrayQueen{
private:
  int front, rear, max_size;
  int *queen;
public:
  ArrayQueen(int &size);
  bool initQueen();
  bool isFull();
  bool isEmpty();
  bool inser(int &value);
  bool del()
  int length();
};

typedef struct Node{
  int data;
  Node *next;
  Node(int value, Node *ptr = nullptr){
    data = value;
    next = ptr;
  }
}Node;

class LinkQueen{
private:
  Node *head, *tail;
public:
  LinkQueen();
  bool initQueen();
  bool isEmpty();
  bool inser(int &value);
  bool del();
  int length();
};
