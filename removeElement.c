int removeElement(int* nums, int numsSize, int val) {
    int x = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[x++] = nums[i];
        }
    }

    return x;
}
