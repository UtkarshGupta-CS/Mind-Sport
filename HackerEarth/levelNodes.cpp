#include <iostream>
#include <map>

using namespace std;

class Graph
{
  map<int, int> storage;

public:
  void addEdge(int n1, int n2);
  int calc(int n);
};

void Graph::addEdge(int n1, int n2)
{
  pair<int, int> p;
  auto search = storage.find(n1);
  p.first = n1;
  if (search != storage.end())
    p.second = search->second++;
  else
    p.second = 1;
  storage.insert(p);

  search = storage.find(n2);
  p.first = n2;
  if (search != storage.end())
    p.second = search->second++;
  else
    p.second = 1;
  storage.insert(p);
}

int Graph::calc(int n)
{
  auto search = storage.find(n);
  if (search != storage.end())
    return search->second;
  else
    return 0;
}

int main()
{
  int n;
  cin >> n;
  Graph g;
  for (int i = 0; i < n - 1; i++)
  {
    int a, b;
    cin >> a >> b;
    g.addEdge(a, b);
  }

  int x;
  cin >> x;
  cout << g.calc(x);

  return 0;
}
