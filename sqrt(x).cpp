class Solution {
public:
    int sqrt(int x) {
        if(x<1)
            return 0;
        long long left = 1,right = x,mid=0;
        while(left<=right)
        {
            mid = (left+right)/2;
            if(x>mid*mid)
            {
                left = mid+1;
            }else if(x<mid*mid)
            {
                right = mid-1;
            }else
            {
                return mid;
            }
        }
        return left-1;
    }
};