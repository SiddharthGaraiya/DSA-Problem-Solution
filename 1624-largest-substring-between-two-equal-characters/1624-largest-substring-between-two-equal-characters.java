class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int ans=-1;
        int length=0;
        HashMap <Character,Integer> hmap = new HashMap<>();
        for (int i=0;i<s.length();i++){
            if( hmap.containsKey(s.charAt(i))){
                length=i-hmap.get(s.charAt(i));
                if (length>ans) ans=length;
                length =0;
            }
            else hmap.put(s.charAt(i),i);
        }
        if (ans!=-1) ans--;
        return ans;
    }
}