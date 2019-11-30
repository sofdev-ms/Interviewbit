//https://www.interviewbit.com/problems/min-stack/

vector < int > s;
int size;
int  min1;
MinStack::MinStack() {
    s.clear();
    size = 0;
    min1 = INT_MAX;
}

void MinStack::push(int x) {
    if(size == 0)
    {
        s.push_back(x);
        min1 = x;
    }
    else
    {
        if(x < min1)
        {
            s.push_back(2 * x - min1);
            min1 = x;
        }
        else
        s.push_back(x);
    }
    size ++;
}

void MinStack::pop() {
    if(size != 0)
    {
        int y = s[size - 1];
        s.pop_back();
        size --;
        if(y < min1)
        {
            min1 = 2 * min1 - y;
        }
    }

}

int MinStack::top() {

    if(size == 0)
    return -1;
    else
    return max(s[size - 1], min1);
}

int MinStack::getMin() {
    if(size == 0)
    return -1;

    return min1;
}

