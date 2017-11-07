#include "stack.h"

ArrayStack::ArrayStack(int length){
  top = -1;
  max_size = length;
  stack = new int[length]
}

bool ArrayStack::initStack(){
  top = 0;
  return true;
}

bool isEmpty(){
  if (top == -1){
    return true
  }
  return false;
}

bool isFull(){
  if (top == max_size - 1){
    return true;
  }
  return false;
}

bool ArrayStack::push(int value){
  if (ifFull()){
    return false;
  }
  else{
    stack[++top] = value;
  }
}

bool ArrayStack::pop(){
  if (isEmpty()){
    return false;
  }
  else{
    top--;
  }
}

LinkStack::LinkStack(){
  head = new Node(0);
}

LinkStack::~LinkStack(){
  initStack();
}
bool LinkStack::isEmpty(){
  if (head->next == nullptr){
    return true;
  }
  return false;
}

void LinkStack::initStack(){
  ptr = head->next;
  Node *ptrTmp;
  while(ptr != nullptr){
    ptrTmp = ptr->next;
    delete ptr;
    ptr = ptrTmp;
  }
  head->next = nullptr;
}

void LinkStack::push(int value){
  Node ptr = new Node(value, head);
  head->next = ptr;
}
bool LinkStack::pop(){
  if(isEmpty()){
    return false;
  }
  Node *ptr = head->next;
  head->next = ptr->next;
  delete ptr;
  return true;
}
