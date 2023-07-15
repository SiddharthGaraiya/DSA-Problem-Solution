class Solution {
    public double average(int[] salary) {
        double max=Integer.MIN_VALUE;
        double min=Integer.MAX_VALUE;
        double avg=0;
        for(int i=0;i<salary.length;i++){
            avg+=(double)salary[i];
            if(salary[i]>max) max=salary[i];
            if(salary[i]<min) min=salary[i];
        }
        avg=avg-min-max;
        return avg/(salary.length-2);
    }
}