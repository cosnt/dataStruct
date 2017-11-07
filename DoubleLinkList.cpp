DoubleLinkList::DoubleLinkList(){
  initList();
}

DoubleLinkList::DoubleLinkList(int list[], int length){
}

DoubleLinkList::~DoubleLinkList(){

}

bool DoubleLinkList::initList(){
  if(isEmpty()){
    head = new HeadNode();
  }
  Node *ptr = head->next, *ptr1;
  do{
    ptr1 = ptr->next;
    delete ptr;
    ptr = ptr1->next;
  }while(ptr->next == )
}

bool DoubleLinkList::isEmpty(){
  if (head->next == nullptr){
    return true;
  }
  return false;
}

int DoubleLinkList::getElem(){

}

bool DoubleLinkList::insert(){

}

bool DoubleLinkList::del(){

}

bool DoubleLinkList::modify(){

}

bool DoubleLinkList::search(){

}

bool DoubleLinkList::merge(){

}
