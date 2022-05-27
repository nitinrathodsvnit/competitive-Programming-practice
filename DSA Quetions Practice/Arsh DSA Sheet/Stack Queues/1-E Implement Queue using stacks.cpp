class MyQueue
{
    stack<int> s1, s2;

public:
    MyQueue()
    {
    }
    void reordertheelement(stack<int> &s1, stack<int> &s2)
    { // s1-> empty
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return;
    }
    void push(int x)
    {
        if (s1.empty() and s2.empty())
        {
            s1.push(x);
        }
        else if (s2.empty())
        {
            reordertheelement(s2, s1);
            s2.push(x);
            reordertheelement(s1, s2);
        }
        else
        {
            reordertheelement(s1, s2);
            s1.push(x);
            reordertheelement(s2, s1);
        }
    }

    int pop()
    {
        if (s1.empty())
        {
            int d = s2.top();
            s2.pop();
            return d;
        }
        else
        {
            int d = s1.top();
            s1.pop();
            return d;
        }
    }

    int peek()
    {
        if (s1.empty())
        {
            int d = s2.top();
            return d;
        }
        else
        {
            int d = s1.top();
            return d;
        }
    }

    bool empty()
    {
        return s1.empty() and s2.empty();
    }
};
