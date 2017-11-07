typedef struct BlockString{
  char data[max_strlen];
  struct BlockString *next;
}BS;

typedef struct {
  BS *head;
  int strLen;
}BS;

//定义两种数据存储结构
  //ArrayString
  //LinkString

class String{
  private:
    char *chars;
    int size;
 private:
   int * getNext(String &str);
   bool KMP(String &str1, String &str2);
   int strLen(const char *ch);
   void strCopy(String &str, const char *ch);

 public:
  String(const char *str = nullptr);
  String(char *chs);
  String(String str);
  ~String();
  //self
  void clear();
  bool del(int index);
  void insert(int index, String str);
  void append(String &str);
  int find(char c, int start = 0);
  int length(String s);
  //
  int strCmp(String str1, String str2);
  String strCat(String str1, String str2 );
  bool isSubString(String str, String str);
  String getSubString(String s, int pos, int len);
  String getSubString(String s, char ch, int sub);
  String assign(String s);
  String assign(const char *chars);
  void replace(String &str, String &newString);
  char& operator [](int n);
  String operator = (String &str);
  String operator + (String &str);
  Sreing operator += (String &str);
};
