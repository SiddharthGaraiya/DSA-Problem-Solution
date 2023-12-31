public class Solution {
    public int maximalNetworkRank(int n, int[][] roads) {
        int[] degrees = new int[n];
        for (int[] road : roads) {
            degrees[road[0]]++;
            degrees[road[1]]++;
        }
        
        Set<Integer> uniqueDegrees = new HashSet<>();
        for (int degree : degrees) {
            uniqueDegrees.add(degree);
        }
        
        List<Integer> sortedDegrees = new ArrayList<>(uniqueDegrees);
        Collections.sort(sortedDegrees, Collections.reverseOrder());

        int maxDeg = sortedDegrees.get(0);
        int secondMaxDeg = sortedDegrees.size() > 1 ? sortedDegrees.get(1) : 0;

        int maxCount = 0;
        for (int degree : degrees) {
            if (degree == maxDeg) maxCount++;
        }

        int secondMaxCount = 0;
        for (int degree : degrees) {
            if (degree == secondMaxDeg) secondMaxCount++;
        }

        if (maxCount > 1) {
            int directlyConnected = 0;
            for (int[] road : roads) {
                if (degrees[road[0]] == maxDeg && degrees[road[1]] == maxDeg)
                    directlyConnected++;
            }
            int possibleConnections = maxCount * (maxCount - 1) / 2;
            return possibleConnections == directlyConnected ? 2 * maxDeg - 1 : 2 * maxDeg;
        }

        int directConnectionsToSecond = 0;
        for (int[] road : roads) {
            if ((degrees[road[0]] == maxDeg && degrees[road[1]] == secondMaxDeg) ||
                (degrees[road[0]] == secondMaxDeg && degrees[road[1]] == maxDeg))
                directConnectionsToSecond++;
        }

        return secondMaxCount == directConnectionsToSecond ? maxDeg + secondMaxDeg - 1 : maxDeg + secondMaxDeg;
    }
}