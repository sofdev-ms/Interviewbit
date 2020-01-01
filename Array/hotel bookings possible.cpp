//https://www.interviewbit.com/problems/hotel-bookings-possible/N

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin() , arrive.end());
    sort(depart.begin() , depart.end());
    int n = arrive.size();
    int present = 1;
    int i = 1 ;
    int j = 0;

    while( i  < n  )
    {
        if(arrive[i] < depart[j])
        {
            i++;
            present++;
        }
        else
        {
            j++;
            present--;
        }
        if(present > K)
        return 0;
    }

    return 1;
}

