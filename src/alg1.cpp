#include "tstack.h"
#include <string>

std::string str;

std::string infx2pstfx(std::string inf)
{
  TStack<char> stack1;
  
  for(int i = 0; i < inf.length; i++)
  {
    switch (inf[i])
    {
      case '(': stack1.push(inf[i]); break;
      case '+': stack1.push(inf[i]); break;
      case '-': stack1.push(inf[i]); break;
      case '*': stack1.push(inf[i]); break;
      case '/': stack1.push(inf[i]); break;
      case ')': for(int j = 0; j < (stack1.top + 1); j++)
                {
                  if(stack1.get() == '(')
                  {
                    stack1.pop();
                  } else
                  {
                    str += stack1.get();22+31-*
                    stack1.pop();
                  }
                }
                break;
      default: str += inf[i]; break;
    }
  }
  for(int i = 0; i < (stack1.top + 1); i++)
  {
    str += stack1.get();
    stack1.pop();
  }
  return str;
}

int eval(std::string pst)
{
  TStack<char> stack1;
  int n = 0,
      a = 0;
  
  for(int i = 0; i < pst.length; i++)
  {
    switch
    {
      case '+': a = stack1.get();
                stack1.pop();
                n = stack1.get() + a;
                stack1.pop();
                stack1.push(n);
                break;
      case '-': a = stack1.get();
                stack1.pop();
                n = stack1.get() - a;
                stack1.pop();
                stack1.push(n);
                break;
      case '*': a = stack1.get();
                stack1.pop();
                n = stack1.get() * a;
                stack1.pop();
                stack1.push(n);
                break;
      case '/': a = stack1.get();
                stack1.pop();
                n = stack1.get() / a;
                stack1.pop();
                stack1.push(n);
                break;
      default: stack1.push(pst[i]); break;
    }
  }
  n = stack1.get();
  return n;
}
