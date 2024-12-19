
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
 
    int* ans = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int i = 0, j = numsSize - 1, k = numsSize - 1;

    while (i <= j) {
        int a = nums[i] * nums[i];
        int b = nums[j] * nums[j];
        if (a > b) {
            ans[k--] = a;
            i++;
        } else {
            ans[k--] = b;
            j--;
        }
    }

    return ans;
}
    