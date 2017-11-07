class Sort{
private:
  int result;
public:
  //insert Sort
  bool straightInsertSort();
  bool binaryInsertSort();
  bool shellSort();

  // select Sort
  void simpleSelectionSort();
  void heapSort();

  //swap Sort
  bool bubbleSort();
  bool quickSort();

  //
  void mergeSort();
  void radixSort();

}
