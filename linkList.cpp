#include "LinkList"
LinkList::LinkList(int list[], int &length){
  head = new Node(list[0]);
  tail = head;
  this.length = 1;
  for (int i = 1; i < length; i++){
    tail->next = new Node(list[i]);
    tail = tail->next;
    this.length++;
  }
}

LinkList::LinkList():length=0{
  initList();
}

void LinkList::initList(){
  if (length == 0){
    head = nullptr, tail = nullptr;
  }
  else{
    Node *ptr1 = head, *ptr2;
    for (int i = 0; i < length; i++){
      ptr2 = ptr1.next;
      delete ptr1;
      ptr1 = ptr2;
    }
    head = nullptr, tail = nullptr;
    length = 0;
  }
}

int LinkList::length(){
  return length;
}

bool LinkList::getElem(int &index, int &value){
  if (index < 0 || index >= length){
    return false;
  }
  Node *ptr1 = head;
  for(int i =1; i <= index, i++){
    ptr = ptr->next;
  }
  value = ptr->data;
  return true;
}

//简化代码-要简洁优美
bool LinkList::insert(int &index, int &value){
  if(index < 0 || index > length)
    return false;
  Node *ptr = new Node(value);
  if (index == 0){
    Node *tmp = head;
    head = ptr;
    head-> next = tmp;
  }else if(index == lengt){
    tail->next = ptr;
    tail = ptr;
  }else{
    Node *ptr = head, ptr2 = new Node(value);
    for(int i = 1; i < length; i++){
      ptr = ptr->next;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
  }
  return true;
}

bool LinkList::del(int &index){
  if(index < 0 || index >= length)
    return false;
  if (index == 0){
    Node *tmp = head;
    head = head->next;
    delete tmp;
  }else{
    Node *ptr = head;
    for(int i = 1; i < length; i++){
      ptr = ptr->next;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
  }
}

bool LinkList::modify(int &index, int &value){
  if(index < 0 || index >= length)
    return false;
  Node *ptr = head;
  for (int i = 1; i < length; i++){
    ptr = ptr->next;
  }
  ptr->data = value;
}

int LinkList(int &value){
  Node *ptr = head;
  for(int i = 0; i < length; i++){
    if(ptr->data == value){
      return i;
    }
    ptr = ptr->next;
  }
  return -1;
}

Node* LinkList::merge(Node *link_1, Node *link_2){
  Node *ptr = new Node(0);
  while(link_1 != nullptr || link_2 != nullptrl){
    if (Link_1->data >= link_2->data ){
      ptr->next = new Node(link_1->data);
      link_1 = link_1->next;
    }else{
      ptr->next = new Node(link_2->data);
      link_2 = link_2->next;
    }
    }
  while(link_1 != nullptr){
    ptr->next = new Node(link_1->data);
    link_1 = link_1->next;
  }
  while(link_2 != nullptr){
    ptr->next = new Node(link_2->data);
    link_2 = link_2->next;
  }
  return ptr
}
