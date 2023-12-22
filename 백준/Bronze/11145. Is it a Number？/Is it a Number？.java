import java.io.*;
import java.math.BigDecimal;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

interface Main{
    static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine());
        String regex = "^[\\s]*([\\d]+)[\\s]*$";
        String str = "";
        Matcher matcher;
        for(int i=0; i<T; i++) {
          str = br.readLine();
          matcher = Pattern.compile(regex).matcher(str);
          if(matcher.find()) {
            bw.write(new BigDecimal(matcher.group(1)) + "\n");
          } else {
            bw.write("invalid input\n");
          }
        }        
        bw.flush(); 
      }
}