class Solution {
    public int lastRemaining(int n) {
        return n<= 1 ? n : 2*(1+n/2-lastRemaining(n/2));
    }
}
