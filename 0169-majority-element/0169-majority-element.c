int majorityElement(int* nums, int numsSize){
    int cnt = 0, m = 0;
    for (int i = 0; i < numsSize ; i++) {
        int x = nums[i];
        if (cnt == 0) {
            m = x;
            cnt = 1;
        } else {
            cnt += m == x ? 1 : -1;
        }
    }
    return m;
}