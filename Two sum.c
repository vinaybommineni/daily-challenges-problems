/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
 int i,j,sum,k=0;
    int *a = malloc(sizeof(int) * 2);
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            if(i!=j&&k==0)
            {
                if(nums[i]+nums[j]==target)
                {
                    a[0]=j;
                    a[1]=i;
                   break;
                }
            }
        }
    }
    return a;
}
