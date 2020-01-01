// https://www.interviewbit.com/problems/evaluate-expression/

int Solution::evalRPN(vector<string> &A) {
    int n = A.size();

    stack < int > s;
    for(int i = 0; i  < n ; i ++)
    {
        if(A[i] == "+")
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();

            s.push(x + y);
        }
        else if(A[i] =="-")
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y - x);
        }
        else if(A[i] =="*")
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y * x);
        }
        else if(A[i] == "/")
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            s.push(y / x);
        }
        else
        {
            s.push(atoi(A[i].c_str()));
        }
    }
    return s.top();
}
