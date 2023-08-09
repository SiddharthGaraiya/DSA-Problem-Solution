class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer,Integer> map=new HashMap<>();
        for (int i=0;i<nums.length;i++){
            int comp= target -nums[i];
            if(map.containsKey(comp)){
                return new int[]{map.get(comp),i};
            }
            map.put(nums[i],i);
        }
        return new int[]{};
    }
}


// class Solution {
//     public int[] twoSum(int[] nums, int target) {
//         Map<Integer, Integer> numMap = new HashMap<>();
//         int n = nums.length;

//         for (int i = 0; i < n; i++) {
//             int complement = target - nums[i];
//             if (numMap.containsKey(complement)) {
//                 return new int[]{numMap.get(complement), i};
//             }
//             numMap.put(nums[i], i);
//         }

//         return new int[]{}; // No solution found
//     }
// }
