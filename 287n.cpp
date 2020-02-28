/*************************************************************************
	> File Name: 287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 14时28分03秒
 ************************************************************************/

//寻找重复数

int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    }while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;

    
}
