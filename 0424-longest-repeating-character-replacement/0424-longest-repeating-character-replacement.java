class Solution {
    public int characterReplacement(String s, int k) {
        int max = Integer.MIN_VALUE;
        int maxFreq = Integer.MIN_VALUE;
        int[] track = new int[26];
        int left = 0;
        int len = s.length();
        for (int right = 0; right < len; right++) {
            int current = right - left + 1;
            char c = s.charAt(right);
            track[c - 'A']++;
            maxFreq = Math.max(track[c-'A'], maxFreq);

            if (current - maxFreq > k) {
                track[s.charAt(left) - 'A']--;
                left++;
            }
            max = Math.max(max, right - left + 1);
        }
        return max;
    }
}