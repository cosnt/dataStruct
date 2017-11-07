const static max_strlen = 256
const static block_size = 6

typedef struct{
  char str[MAX_STRLEN];
  int length;
}string;

typedef struct BlockString{
  char data[max_strlen];
  struct BlockString *next;
}bs;

typedef struct {
  Bs *head;
  int strLen;
}BS;//block string

class ArrayString{
private:
string *head;
public:
  ArrayString();
  ArrayString(cosnt char *ch);
  void init()
  void strAssign(String t, const char chars);
  String strConcat(String s1, String s2);
  String stringConcat(String s1, char *ch)
  String subString(String s, int pos, int len);
  int strCmp(String s1, String s2);
  int length(Sting s);
  String subString(String s, int pos, int len, int sub);#?
  void insert(String s, int index, char ch);
  void del(int index);
  void clear(String s);
  bool search(String s1, String s2);
  void copy(String s);
  void replace(String s1, String s2);
private:
  bool KMP(String s1, String s2);

}
