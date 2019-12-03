//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &nums) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = nums.size();
    int j = 0;
    int i = 0;
    while( i < n)
    {
        int c = nums[i];
        int count = 0;
        while(i < n && nums[i] == c)
        {
            i++;
            count++;
        }
        nums[j++]=c;
        if(count >= 2)
            nums[j++]=c;
    }
    return j;
}
