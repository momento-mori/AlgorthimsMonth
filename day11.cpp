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
  //for(int i = 0; i < N-1; i++){ //range based for loop gives me direct access
  for(auto &C : s){
    switch(C){ 
      case '{':
        //check.push(C);
      case '(':
        //check.push(C);
      case '[':
        check.push(C); break;
      case '}':
        if(check.empty() || check.top() != '{') return false; else check.pop(); //return true;
        break;
      case ')':
        if(check.empty() || check.top() != '(') return false; else check.pop(); //return true;
        break;
      case ']':
        if(check.empty() || check.top() != '[') return false; else check.pop(); //return true;
        break;
      default:
        continue;
    }  
  }    

/*
  for(auto &c : s){
    if(c == '('){
      check.push(')');
    }
    else if(c == '['){
      check.push(']');
    }
    else if(c == '{'){
      check.push('}');
    }
    else if(check.empty() || check.pop() != c){
      return false;
    }
  }
*/
  return check.empty();
}

int main()
{
}

/*
    I made this harder than needed by trying to keep djikstra from being mad 
    at me and not use a switch statement. And as soon as I started using 
    if else statements it got ugly fast which made me rethink approach as this
    is easy problem.
  
    Analysis
  
public boolean isValid(String s) {
  Stack<Character> stack = new Stack<Character>();
  for (char c : s.toCharArray()) {
    if (c == '(')
      stack.push(')');
    else if (c == '{')
      stack.push('}');
    else if (c == '[')
      stack.push(']');
    else if (stack.isEmpty() || stack.pop() != c)
      return false;
  }
  return stack.isEmpty();
}
*/
