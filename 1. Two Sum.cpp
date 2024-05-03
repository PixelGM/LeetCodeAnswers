#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// My Solution
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        
        for (int i = 0; i< nums.size(); i++)
        {
            int sub = target - nums[i];

            // Check if we have in Dictionary
            if (map.count(sub))
                return {map[sub], i};


            // Add to Dictionary
            map[nums[i]] = i;
        }

        // Return nothing if nothing found
        return {};
    }

int main()
{
    vector<int> nums = {1,2,3};
    int target = 5;
    
    vector<int> result = twoSum(nums, target);
    
    for (int i : result)
        cout << i << " ";

    return 0;
}
