class Solution {
    public int isWinner(int[] player1, int[] player2) {
        int p1=0;
        int p2=0;
        int counter=0;
        for (int i=0;i<player1.length;i++){
            p1+=player1[i];
            if(counter>0){p1+=player1[i]; counter--;}
            if(player1[i]==10) counter=2;       
        }
        counter =0;
        for (int i=0;i<player2.length;i++){
            p2+=player2[i];
            if(counter>0){p2+=player2[i]; counter--;}
            if(player2[i]==10) counter=2;       
        }
        if(p1>p2) return 1;
        else if(p1<p2) return 2;
        else return 0;
    }
}