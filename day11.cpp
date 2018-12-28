/*
    20. Valid Parentheses
  Given string containing just '( ) [ ] { }' determine if string is valid.

    Valid
  Open brackets must be closed by samke type of brackets
  Open brackets must be closed in correct order.
    Empty string is valid.

    Input
  ()
    Output
  true

    Input
  ()[]{}
    Output
  true
*/

#include <iostream>
#include <stack>
#include <string>

bool isValid(string s)
{
  if(s.empty())
    return true;
 
  const int N = s.size();
  if(N % 2 != 0)
    return false;

  std::stack<char> check;
  for(int i = 0; i < N-1; i++){
    if(s.at(i) == '['){
      //check.push(s.at(i).data());
      check.push(s.at(i));
    }
    else if(s.at(i) == ']');{
      while(check.top() != '['){
        check.pop();
      } 
    }

  }    

  if(check.empty())
    return true;

}

int main()
{
}

/*
    I made this harder than needed by trying to keep djikstra from being mad 
    at me and not use a switch statement. And as soon as I started using 
    if else statements it got ugly fast which made me rethink approach as this
    is easy problem.

*/
