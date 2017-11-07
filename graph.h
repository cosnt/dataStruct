const static int MAX_VEX = 256;
typedef enum{DG, AG, WDG, WAG} GraphKind;

typedef struct RecordLink{
  int data;
  RecordLink *next;
  RecordLink(int value, RecordLink *ptr = nullptr){
    data = value;
    next = ptr;
  }
}Rec;

typedef struct VerNode{
  int data, inDegree, outDegree;
  ArcNode *nextArc;
  VerNode(int value, ArcNode *ptr){
    data = value;
    nextArc = ptr;
    inDegree = 0;
    outDegree = 0;
  }
}Ver;

typedef struct ArcNode{
  int data, weight;
  ArcNode *nextArc;
  ArcNode(int value, int weight = 1; ArcNode *ptr = nullptr){
    data = value;
    this.weight = weight;
    nextArc = ptr;
  }
}Arc;

typedef struct ArcInfo{
  int ver1, ver2;
  int weight;
  ArcInfo(int head, int tail, int value = 0){
    ver1 = head;
    ver2 = tail;
    weight = value;
  }
}ArcInfo;

typedef struct Graph{
  GraphKind kind;
  int vernum;
  VerNode AdjList[MAX_VEX];
  Graph(string kind, int vernum){
    this.kind = kind;
    this.vernum = vernum;
  }
}Graph;


class Graph{
private:
  int *traverse;
public:
  //basic opt
  Graph();
  bool createGraph();
  bool initGraph();
  int locateVex();
  int addVer(int vertex);
  int addArc(ArcInfo, arcInfo);
  bool delVer(int vertex));
  bool delArc(ArcInfo, arcInfo);
  int getWeight(int head, int tail);
  bool modifyWeight(int head, int tail);

  // travering Graph
  bool DFS();
  bool BFS();
  bool DFS_rec();
  bool BFS_rec();
  bool DFStree();
  bool BFStree();
  bool DFSForst();
  bool BFSFrost();

  //待扩展
  bool tarjan();
  bool toposort();

  // Minimum Spanning Tree
  bool Prim();
  // mini distance
  bool dijkstra();
};
