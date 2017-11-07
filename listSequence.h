class ListSequence{
private:
  int length;
  int *list;
  int size;
public:
  ListSequence(int &size);
  int length();
  void initList();
  int getElem(int &index);
  int getIndex(int &value);
  bool insert(int &index, int &value);
  bool del(int &index);
  bool modify(int &index, int &value);
  int search(int &value);
};
