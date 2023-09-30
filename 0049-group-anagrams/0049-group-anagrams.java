class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> hMap= new HashMap <>();
        
        for(String word:strs){
            char[] chars=word.toCharArray();
            Arrays.sort(chars);
            String sortedWord= new String (chars);
            
            if(!hMap.containsKey(sortedWord)){
                hMap.put(sortedWord,new ArrayList<>());
            }
            hMap.get(sortedWord).add(word);
        }
        return new ArrayList<>(hMap.values());
    }   
}