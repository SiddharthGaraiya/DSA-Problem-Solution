class Solution {
    public int minOperations(String s) {
        char c_0 = s.charAt(0);
        int count1= count(s,c_0);
        int count2= count(s,c_0=='0'?'1':'0')+1;
        return Math.min(count1,count2);
    }
    private int count(String s, char prev){
        int count=0;
        for (int i=1;i<s.length();i++){
            char curr=s.charAt(i);
            if (curr == prev){
                count++;
                prev =prev=='0'?'1':'0';
            }else{
                prev=curr;
            }
        }
        return count;
    }
}