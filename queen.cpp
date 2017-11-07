#include "queen.h"
ArrayQueen::ArrayQueen(int &size){
  queen = new int[size];
  max_size = size;
  initQueen();
}

bool ArrayQueen::initQueen(){
  head = 0;
  rear = 0;
}

bool isEmpty(){
  if (head == rear){
    return true;
  }
  return false;
}

bool isFull(){
  if ((rear+1)%max_size == head){
    return true;
  }
  return false;
}

bool ArrayQueen::insert(int &value){
  if (isFull()){
    return false;
  }
  queen[(rear+1)%max_size] = value;
  rear++;
  return true;
}

bool ArrayQueen::del(){
  if(isEmpty()){
    return false;
  }
  head = (head+1)%max_size;
}

int ArrayQueen::length(){
  return ((rear - head)%max_size)
}

LinkQueen::LinkQueen(){
  initQueen();
}

void LinkQueen::initQueen(){
  if (head != nullptr){
    Node *ptr = head, *ptr1;
    while(ptr != nullptr){
      ptr1 = ptr->next;
      delete ptr;
      ptr = ptr1;
    }
  }
  head = nullptr;
  rear = nullptr;
}

bool LinkQueen::isEmpty(){
  if (head == nullptr)
    return true;
  return false;
}
void LinkQueen::inser(int &value){
  rear->next = new Node(value);
  rear = rear->next;
}

bool LinkQueen::del(){
  if (isEmpty()){
    return false;
  }
  Node *ptr = head->next;
  delete head;
  head = ptr;
  return true;
}

int LinkQueen::length(){
  int len = 0;
  Node *ptr = head;
  while(ptr != nullptr){
    len++;
    ptr = ptr->next;
  }
  return len;
}
