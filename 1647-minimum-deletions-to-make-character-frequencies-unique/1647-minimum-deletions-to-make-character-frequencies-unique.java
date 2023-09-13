import java.util.HashMap;
import java.util.PriorityQueue;
import java.util.Map;

public class Solution {
    public int minDeletions(String s) {
        // Create a HashMap to count the frequency of each character.
        Map<Character, Integer> frequencyMap = new HashMap<>();

        // Iterate through the characters in the input string 's'.
        for (char c : s.toCharArray()) {
            frequencyMap.put(c, frequencyMap.getOrDefault(c, 0) + 1);
        }

        // Create a max-heap (PriorityQueue) to store character frequencies in decreasing order.
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a, b) -> b - a);

        // Populate the max-heap with character frequencies from the map.
        maxHeap.addAll(frequencyMap.values());

        // Initialize a variable to keep track of the minimum number of deletions needed.
        int count = 0;

        // Continue as long as there are at least two frequencies in the max-heap.
        while (maxHeap.size() > 1) {
            int top = maxHeap.poll(); // Get the character frequency with the highest count.

            // Check if the next character in the max-heap has the same frequency as 'top' (and it's not zero).
            if (maxHeap.peek() != null && maxHeap.peek() == top && top != 0) {
                count++; // Increment the deletion count.
                maxHeap.add(top - 1); // Decrease 'top' frequency by 1 and push it back into the max-heap.
            }
        }

        // Return the minimum number of deletions required to make the string "good."
        return count;
    }
}