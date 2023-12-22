import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        boolean check = true;
        int aScore = 0;
        int bScore = 0;
        int aWin = 0;
        int draw = 0;
        int bWin = 0;

        while (check) {
            if (aScore == a && bScore == b) //answer
                break;
            if (aScore + 3 <= a) { //a win
                aScore += 3;
                aWin++;
                continue;
            } else if (aScore + 1 <= a && bScore + 1 <= b) { //draw
                aScore++;
                bScore++;
                draw++;
                continue;
            } else if (bScore + 3 <= b) {  //b win
                bScore += 3;
                bWin++;
                continue;
            } else {
                check = false;
                break;
            }
        }

        if (check)
            System.out.println(aWin + " " + draw + " " + bWin);
        else
            System.out.println(-1);
    }
}