/*
    12.26.18 
   797. All Paths From Source to Target
    Given source is vertex 0 and target is vertex N-1.

   Input: [[1,2[, [3], [3], []]
   Output: [[0,1,3], [0,2,3]]
   Explanation: The graph looks like this:
   
   0-->1
   |   |
   v   v
   2-->3

   There are two paths: 0->1->3 and 0->2->3

   Given graph is directed acyclic graph of N nodes.
    What algorthims work best on directed graphs?

    Acyclic?
     No cycles in graph. Directed means edges work one way blah blah blah. 
     Lets go. This should immediately jump out as a dp problem which it did.
*/

#include <iostream>
#include <vector>

void dfs(std::vector<std::vector<int>> &graph, std::vector<int> &path, std::vector<std::vector<int>> &result, int vertex)
{
  path.push_back(vertex);

  if(graph[vertex].size() == 0){
    result.push_back(path);
  }

  for(auto v : graph[vertex]){
    dfs(graph, pathm result, v);
  }
}

std::vector<std::vector<int>> allPathsSourceTarget(std::vector<std::vector<int>> & graph)
{
  std::vector<int> path;
  std::vector<std::vector<int>> result;
  dfs(graph, path, result, 0);
  return result;
}

int main()
{

}

/*
    Analysis:
  So I totally misunderstood what the question was asking. It is very simple
  all it wants is the paths from src to dest in a DAG. A dfs on the graph 
  easily solves this problem. 

  Only thing I don't fully grasp is why we add a path to our paths when the 
  size of of ADJ list associated w a vertex == 0..
*/
