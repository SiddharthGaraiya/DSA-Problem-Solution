class Solution {
    public String decodeAtIndex(String encodedString, int k) {
        Stack<Long> characterLengths = new Stack<>(); // Stores the lengths of characters in the decoded string

        // Calculate lengths for each character in the encoded string
        characterLengths.push(0L); // Start with 0 length

        for (int i = 0; i < encodedString.length(); i++) {
            char c = encodedString.charAt(i);
            if (Character.isDigit(c)) {
                // If the character is a digit, update the length based on the digit
                long length = characterLengths.peek() * (c - '0');
                characterLengths.push(length);
            } else {
                // If the character is a letter, increment the length
                long length = characterLengths.peek() + 1;
                characterLengths.push(length);
            }
        }

        // Traverse the character lengths to decode and find the kth character
        int ln = characterLengths.size();
        while (!characterLengths.isEmpty()) {
            k %= characterLengths.peek(); // Adjust k based on the character length
            ln--;
            // If k is 0 and the character is an alphabet letter, return it
            if (k == 0 && Character.isLetter(encodedString.charAt(ln - 1))) {
                return String.valueOf(encodedString.charAt(ln - 1));
            }

            // Move to the previous character length
            characterLengths.pop();
        }

        return ""; // Return an empty string if no character is found
    }
}