class Solution {
    Integer prev=null;
    int count=1;
    int max=0;
    public int[] findMode(TreeNode root) {
        if(root==null) return new int []{};
        
        ArrayList<Integer> nums=new ArrayList<>();
        getNodes(root,nums);
        
        int temp[]=new int [nums.size()];

        for(int i=0;i<nums.size();i++) temp[i]=nums.get(i);
        
        return temp;
    }
    
    public void getNodes(TreeNode root,ArrayList<Integer> nums){
        if(root==null) return;
        
        getNodes(root.left,nums);
        
        if(prev!=null){
            if(prev==root.val) count++;
            else count=1;
        }
        
        if(count>max){
            nums.clear();
            max=count;
            nums.add(root.val);
        }
        else if(count==max){
            nums.add(root.val);
        }
        
        prev=root.val;
        
        getNodes(root.right,nums);
    }
}
