#include<iostreame>
using namespace std;

class stack
{
    char arr[50];
    int top;
public:
    stack()
    {
        top = -1;
    }

    void push(char x)
    {
        arr[++top] = x;
    }
    char pop()
    {
        return arr[top--];
    }
    char peek()
    {
        return arr[top];
    }
    int empty()
    {
        return top == -1;
    }
};
int priority(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    return 1;    
}
int main()
{
    string infix, postfix = "";

    cout << "enter infix expression: ";
    cin >> infix;

    stack exp;

    for(char x : infix)
    {
        if (x >= 'a' && x <= 'z')
            postfix += x;
        else if (x == '(')
            exp.push(x);
        else if (x == ')')
        {
            while (!exp.empty() && exp.peek() != '(')
                postfix += exp.pop();
            exp.pop();
        }
        else
        {
            while (!exp.empty() && priority(exp.peek()) >= priority(x))
                postfix += exp.pop();
            exp.push(x);
        }   
    }
}