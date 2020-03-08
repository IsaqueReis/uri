 import java.util.Scanner;
import java.util.LinkedList;
import java.util.Collections;

public class Main
{
    public static void main(String[] args)
    {Scanner in = new Scanner(System.in);
     LinkedList<Integer> list = new LinkedList<Integer>();
     int n = in.nextInt();
     int ord[] = new int[n];

        for(int i = 1; i <= n; i++)
            list.add(i);
        
        for(int i = 0; i < n; i++)
            ord[i] = in.nextInt();
        
        int j = 0;
        for(int i : ord)
        {
            int tmp = list.indexOf(i);
            list.remove(tmp);
            tmp++;
            System.out.printf("%d", tmp);
            if(j < n - 1)
                System.out.printf(" ");
            j++;
        }
        System.out.printf("\n");
    }
}