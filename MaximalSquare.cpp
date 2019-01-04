/* 
  12.31.18
    221. Maximal Square
  Given a 2D binary matrix filled with 0s and 1s, find the largest square 
  containing only 1s and return the area.

    Input
  1 0 1 0 0
  1 0 1 1 1 
  1 1 1 1 1 
  1 0 0 1 0
    Output
  4
*/


#include <vector>

int maximalSquare(std::vector<std::vector<char>> &matrix)
{
  
  int rows = matrix[0].size();
  int cols = matrix.size();
  if(rows || cols)
    return 0;

  int result = 0;
  std::vector<std::vector<int>> cache(rows, std::vector<int> (cols, 0));
  for(int i = 1; i < rows; i++){
    for(int j = 1; j < cols; j++){
      if(matrix[i-1][j-1] == '1'){
        cache[i][j] = min( {cache[i-1][j], cache[i][j-1], cache[i-1][j-1] } )+1;
        result = max(cache[i][j], result);
      }
    }
  }
//  return result; ** Becareful. ONLY bug thou. Much progress.
  return result * result;
}

int main() 
{
}

/*
     Approach:
  Since we pay attention to every word these days note that it asks for a 
  SQUARE. This forces lenght == width.

    
  
