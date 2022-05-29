/*
map mate insert use na karvu nahitar kyarek update thato hase to change nay kare
m[i]use j karvu
*/

class StockSpanner
{
public:
    stack<int> s;
    map<int, int> m;
    StockSpanner()
    {
    }

    int next(int price)
    {
        if (s.empty() or s.top() > price)
        {
            s.push(price);
            m[price] = 1;
            return 1;
        }
        else
        {
            int tm = 1;
            while (!s.empty() and s.top() <= price)
            {
                tm += m[s.top()];
                s.pop();
            }
            s.push(price);
            m[price] = tm;
            return tm;
        }
    }
};
