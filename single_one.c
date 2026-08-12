/*Given a non-empty array of integers nums, every element appears twice except for one. 
Find that single one.
You must implement a solution with a linear runtime complexity and use only 
constant extra space.
*/
//any number when XOR with itself becomes 0 (Expression: a'b + ab')
//thus, if it is presnt only once, that no. will be the result

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i=0 ; i<numsSize ; i++)
    {
        result = result^nums[i];
    }
    return result;  //which is the value that appears only once
}