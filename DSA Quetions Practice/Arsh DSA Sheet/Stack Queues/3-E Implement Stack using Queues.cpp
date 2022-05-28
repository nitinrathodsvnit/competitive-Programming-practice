class MyStack
{
    queue<int> s1, s2;

public:
    void reorderdata(queue<int> &s1, queue<int> &s2)
    {
        // s1 is empty
        while (!s2.empty())
        {
            s1.push(s2.front());
            s2.pop();
        }
    }
    MyStack()
    {
    }

    void push(int x)
    {
        if (s1.empty() and s2.empty())
        {
            s1.push(x);
        }
        else if (s1.empty())
        {
            s1.push(x);
            reorderdata(s1, s2);
        }
        else if (s2.empty())
        {
            s2.push(x);
            reorderdata(s2, s1);
        }
    }

    int pop()
    {
        if (s1.empty())
        {
            int d = s2.front();
            s2.pop();
            return d;
        }
        else
        {
            int d = s1.front();
            s1.pop();
            return d;
        }
    }

    int top()
    {
        if (s1.empty())
        {
            return s2.front();
        }
        else
        {
            return s1.front();
        }
    }

    bool empty()
    {
        return s1.empty() and s2.empty();
    }
};
