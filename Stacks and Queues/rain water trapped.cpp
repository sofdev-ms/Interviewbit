//https://www.interviewbit.com/problems/rain-water-trapped/

int Solution::trap(const vector<int> &A) {
   int n = A.size();
   int left[n];
   int right[n];
   left[0] = 0;
   for(int i = 1 ; i  < n ; i ++)
   {
       left[i] = max(left[ i - 1] , A[i - 1]);
   }
   right[ n - 1]  = 0;
   for(int i = n - 2;  i >= 0 ; i --)
   right[i] = max(right[ i + 1] , A[ i + 1]);

   int total = 0;
   for(int i = 1; i < n - 1; i++)
   {
       total += max( 0 , min(left[i] , right[i]) - A[i]);
   }
   return total;
}
