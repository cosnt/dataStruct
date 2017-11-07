struct BTNode_2{
  int date;
  struct BTNode_2 *Lchild, *Rchild;
}

struct BTNode_3{
  int date;
  struct BTNode_3 *Lchild, *Rchild, *parent;
}

class BinaryTree{
private:
public:
  //Traversing Binary Tree
  void preOrderTraverse();
  void preOrderTraverse_rec();
  void inOrderTraverse_rec();
  void inOrderTraverse_rec();
  void postOrderTraverse();
  void postOrderTraverse_rec();
  void leveIorderTraverse();
  //
  int serchLeaves();
  int serchDepth();

  //
  void preOrderThreading();
  void inOrderThreading();
  void postOrderThreading();
}
