// https://www.interviewbit.com/problems/palindrome-string/

int Solution::isPalindrome(string A) {
    int n = A.length();
    int i =0 ;
    int j = n - 1;
    while( i < j)
    {
        if(isalnum(A[i]) && isalnum(A[j]))
        {
            if(tolower(A[i]) == tolower(A[j]))
            {
                i++;
                j--;
            }
            else
            return 0;
        }
        else if(isalnum(A[i]))
        {
            j--;
        }
        else if(isalnum(A[j]))
        i++;
        else
        {
            i++;
            j--;
        }
    }

    return 1;

}
