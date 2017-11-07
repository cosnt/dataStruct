#include "newString.h"

String::String(const char *chs = nullptr){
  size = strLen(chs);
  str = new char[size + 1];
  strCopy(str, chs);
}

// end label?
int String::strLen(const char *ch){
  int i = 0;
  while(ch[i++] != '\0');
  return i;
}

void String::strCopy(String &str, const char *chs){
  strSize = strLen(chs);
  if (str.size != strSize){
    delete [] str.chars;
    str.chars = new char[strSize + 1];
    str.size = strSize;
  }
  int i = 0;
  while(chs[i] != 0)
    str[i] = chs[i++];
  str[++i] = '\0';
}

String::~String(){
  delete [] str;
}

void String::clear(){
  delete [] str;
  size = 0;
  str = new char[size + 1];
  str[0] = '\0'
}

bool String::del(int index){
  if (index < 0 || index >= size){
    return false;
  }
  for(int i = index; i <= size; i++){
    str[i] = str[i+1];
  }
  size--;
  return true;
}

bool String::insert(int index, String s){
  if (index < 0 && index > size){
    return false;
  }
  strSize = length(s);
  char *strTmp = new char[size + strSize + 1];
  if (index == 0){
    for (int i = 0; i < strSize; i++){
      strTmp[i] = s[i];
    }
    for(int i = 0; i <= size; i++){
      strTmp[i + strSize] = str[i];
    }
  } else if(index == size){
    for(int i = 0; i < size; i++){
      strTmp[i] = str[i];
    }
    for(int i = 0; i <= strSize; i++){
      strTmp[i + size] = s[i];
    }
  } else {
    for (int i = 0; i < index ; i++){
      strTmp[i] = str[i];
    }
    for (int i = 0; i < strSize; i++){
      strTmp[i + index] = s[i];
    }
    for (int i = index; i <= size; i++){
      strTmp[i + strSize] = str[i];
    }
  }
  delete [] str;
  str = strTmp;
  size += strSize;
  return true;
}

void String::append(String &str){
  insert(size, str);
}

int String::find(char c, int start = 0){
  for(int i = start; i < size; i++){
    if (str[i] == c)
      return i;
  }
  return -1;
}

int String::length(String s){
  int i = 0;
  while(str[i++] != '\0');
  return i;
}

int String::strCmp(String str1, String str2){
  int i = 0;
  while(str1[i] == str2[i]){
    if(str1[i] == '\0' && str2[i] == '\0')
      return 0;
    i++;
  }
  return (str1[i]-str2[i])/abs(str1[i]-str2[i]);
}

String String::strCat(String str1, String str2 ){
  int i = 0;
  String str;
  str.str = new char[str1.size + str2.size + 1];
  str.size = str1.size + str2.size;
  for(int i; i < str1.size; i++){
    str[i] = str1[i];
  }
  for(int i = 0; i <= str2.size; i++){
    str[i + str1.size] = str2[i];
  }
  return str;
}

bool String::isSubString(String str1, String str2){
  return KMP(String str1, String str2);

}

bool String::getSubString(String &s, int pos, int len){
  if( (pos + len) < size){
    return false;
  }
  s.size = len;
  for(int i =0; i < len; i++){
    s[i] = this.str[i + pos];
  }
  s[i+1] = '\0';
}

String String::assign(String s){
  String str;
  str = s;
  return str;
}

String String::assign(const char *chars){
  String str;
  strCopy(str, chs)
  return str;
}

void String::replace(String &str, String &newString){
  String::replace(str, newString.chars);
}

void String::replace(String &str, const char *chars){
  strCopy(str, chars);
}

char& String::operator [](int n){
  return chars[n];
}

String String::operator = (String &str){
  String s;
  strCopy(s, str.chars);
  return s;
}

String String::operator + (String &str){
  String s;
  s.chars = new char[size + str.size + 1];
  for(int i = 0; i < size; i++){
    s[i] = chars[i];
  }
  for(int i = 0; i <= str.size; i++){
    s[i + size] = str[i]
  }
  return s;
}

String String::operator += (String &str){
  char *tmp = new char[size + str.size + 1]
  for(int i = 0; i < size; i++){
    tmp[i] = chars[i];
  }
  for(int i = 0; i <= str.size; i++){
    tmp[i + size] = str[i]
  }
  delete [] chars;
  chars = tmp;
  return this;
}

bool arrayEqual(String &str, int mid, int end){
  for(int i = 0; i < mid; i++){
    if(str[i] != str[end - i]){
      return false;
    }
  }
  return true;
}

int* String::getNext(String &str){
  int *ptr = new int[s.size];
  ptr[0] = -1;
  ptr[1] = 0;
  int times = 0;
  for(int i = 2; i < s.size; i++){
    ptr[i] = 0;
    for(int j = 1; j < i; j++){
      if(arrayEqual(str, j, i-1))
        ptr[i]++;
    }
  }
  return ptr;
}

int findNext(String &str){
  int i, k;
  int m = str.size;
  int *next = new int[m];
  next[0] = -1;
  j = 0; k = -1;
  while()
}

int* next(String &str){
    int *intptr = new int[str.size]
    int i = 0, j = -1;
    intptr[0] = -1;
    while(i < str.size - 1){
        while(j >= 0 && str[j] != str[i])
            j = intptr[j];
        i++; j++; intptr[i] = j;
    }
    return intptr;
}
        if(str[j] == str[i])
            intptr[i] = next[i];
        else
            intptr[i] = k;
    }
    return intptr;
}

bool String::KMP(String &str1, String &str2){

}
