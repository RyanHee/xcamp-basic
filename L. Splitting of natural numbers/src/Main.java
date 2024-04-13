import java.util.*;


public class Main {

    static ArrayList<String> lst;
    private static void solve(int n, StringJoiner sj, int canStartFrom){
        if (n==2){
            if (canStartFrom>1){
                return;
            }
            StringJoiner sj1=new StringJoiner("+");
            sj1.merge(sj);
            sj1.add("1+1");
            lst.add(sj1.toString());
            return;
        }

        for (int i=canStartFrom; i<=n/2;i++){
            StringJoiner sj1=new StringJoiner("+");
            StringJoiner sj2 = new StringJoiner("+");

            sj1.merge(sj);
            sj1.add(String.valueOf(i));

            sj2.merge(sj1);
            sj2.add(String.valueOf(n-i));
            solve(n-i, sj1, i);
            lst.add(sj2.toString());
        }
    }



    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        n=input.nextInt();
        lst=new ArrayList<>();
        solve(n, new StringJoiner("+"), 1);

        //Collections.sort(lst);

        for (String s:lst){
            System.out.println(n+"="+s);
        }
        //System.out.println(set.size());

    }
}