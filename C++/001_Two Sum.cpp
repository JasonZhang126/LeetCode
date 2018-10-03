class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    result[0] = i;
                    result[1] = j;
                    return result; //返回一个数组：法一：从函数返回指针 int *twosum()  return 数组名；法二：本例返回vector的动态数组；
                }
            }
        }
    }
};
