/*
在原序列中去除两个不同的元素后，那么在原序列中的多数元素
在新序列中还是多数元素
*/

int majorityElement(int* nums, int numsSize) {
	int major;
	int count = 0;
	int i;

	major = nums[0];
	for(i=0;i<numsSize;i++)
	{
		if(nums[i] == major)
		{
			count ++;
		}
		else if(count == 0)
		{
			major = nums[i];
			count = 1;
		}
		else
		{
			count --;
		}
	}
	return major;
}