//you need an headnode and it dont put in a value
//省一个节点代码难写多了
CircularLinkList::CircularLinkList(){
  initList();
}

CircularLinkList::CircularLinkList(int &list[], int length){
  head = new Node(list[0]);
  head->next = head;
  tail = head;
  length = 1;
  for(int i = 1; i < length; i++){
    tail->next = new Node(list[i], head);
    tail = tail->next;
    length++;
  }
}


CircularLinkList::~CircularLinkList(){
  initList();
}

CircularLinkList::initList(){
  if (length == 0){
    head = nullptr;
    tail = nullptr;
  }else{
    Node *ptr = head, ptr1;
    while(ptr->next != tail){
      ptr1 = ptr->next;
      delete ptr;
      ptr = ptr1->next;
    }
  }
}

bool CircularLinkList::getElem(int &index, int &value){
  if(index >= length){
    return false;
  }else{
    Node *ptr = head;
    for(int i = 0; i < index; i++){
      ptr = ptr->next;
    }
    value = ptr->data;
    return true;
  }
}

bool CircularLinkList::insert(int &index, int &value){
  if(index > length || index < 0){
    return false;
  }else if(index == 0){
    head = new Node(value, head);
    tail->next = head;
  }else if(index == length){
    tail ->next = new Node(value,head);
    tail = tail->next;
  }else{
    Node *ptr = head;
    for(int i = 1; i < index; i++){
      ptr = ptr->next;
    }
    ptr->next = new Node(value, ptr->next);
  }
  length++;
  return true;
}

bool CircularLinkList::del(int &index){
  if(index >= length || index < 0){
    return false;
  }else{
    Node *ptr = head, *ptr1;
    for (int i = 1; i < index; i++){
      ptr = ptr->next;
    }
    ptr1 = ptr->next;
    ptr->next = ptr1->next;
    delete ptr1;
  }
  if(index == (length -1)){
    tail = ptr;
  }
  length--;
  return true;
}

bool CircularLinkList::modify(int &index, int &value){
  if (index < 0 || index >= length){
    return false;
  }else{
    Node *ptr = head;
    for(int i = 1; i < index; i++){
      ptr = ptr->next;
    }
    ptr->data = value;
    return true;
  }
}

int CircularLinkList::search(int &value){
  Node *ptr = head;
  /*
  do{
    if(ptr->data == value){
      return true;
    }
    ptr = ptr->next
  }while(ptr != head)
  return false;
  */
  if(ptr->data == value){
    return true;
  }else{
    for(int i = 1; i < length; i++){
      ptr = ptr->next;
      if(ptr->data == value){
        return true;
      }
    }
    return false
  }
}

//no headnode is implicit
Node* CircularLinkList::merge(Node *link_1, Node *list_2){
  Node *head_1 = link_1, *head_2 = list_2, *tmp;
  do{
    if(link_1->data >= link_2->data){

    }else{

    }
  }
}
