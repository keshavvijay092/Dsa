void checkingStack(stack<int>&s,int data)
{
    if(s.empty())
    {
        s.push(data);
        return ;
    }
    
    if(s.top()>data)
    {
         int val = s.top();
         s.pop();
         checkingStack(s,data);
         s.push(val);
         return ;
    }
    else
    {
        s.push(data);
        return ;
    }
    return ;
}
void Sorted(stack<int>&s)
{
    if(s.empty())
    {
        return ;
        
    }
    int data = s.top();
    s.pop();
    Sorted(s);
    checkingStack(s,data);
    return ;
}
void SortedStack :: sort()
{
  Sorted(s);
  return ;
}