#include "listSequence.h"
ListSequence::ListSequence(int &size){
  this.size = size;
  initList();
}

void ListSequence::initList(){
  list = new int[size];
  length = 0;
}

int ListSequence::length(){
  return length;
}

int ListSequence::getElem(int &index){
  return list[index];
}

int ListSequence::getIndex(int &value){
  for (int i = 0; i < size; ++i){
    if (list[i] == value)
      return i;
  }
  return -1;
}

bool ListSequence::insert(int &index, int &value){
  if(index < 0 || index >= length || length >= size)
    return false;
  for(int i = index; i < length; i++){
    list[i+1] = list[i];
  }
  list[index] = value;
  length++;
  return true;
}

bool ListSequence(int &index){
  if(index < 0 || index >= length)
    return false;
  for(int i = index -1; i < length; i++){
    list[i] = list[i+1];
  }
  length--;
  return true;
}

bool ListSequence::modify(int &index, int &value){
  if(index < 0 || index >= length)
    return false;
  list[index] = value;
  return true;
}

int ListSequence::search(int value){
  for(int i = 0; i < length; i++){
    if (list[i] = value)
      return i;
  }
  return -1;
}
