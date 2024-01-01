import java.util.Arrays;

class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        
        int contentChildren = 0;
        int childIdx = 0;
        
        for (int cookie : s) {
            if (childIdx < g.length && cookie >= g[childIdx]) {
                contentChildren++;
                childIdx++;
            }
        }
        
        return contentChildren;
    }
}
