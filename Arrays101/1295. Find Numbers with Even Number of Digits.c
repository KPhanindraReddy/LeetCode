int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int d = 0;
        int num = nums[i];

        while (num > 0) {
            num /= 10;
            d++;
        }

        if (d % 2 == 0) {
            count++;
        }
    }

    return count;
}
