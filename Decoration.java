import java.util.*;
class Decoration
{
    public static void main(String[] args)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Height of Tree: ");
        n=sc.nextInt();
        int a=n;
        char ch='A';
        for(int i=0;i<a;i++)
        {
            for(int k=0;k<n-1;k++) {
                System.out.print(" ");
            }
            n--;
            for(int j=-1;j<i;j++)
            {
                System.out.print(ch+" ");
                if(ch>90) ch='A';
            }
            ch++;
            System.out.println();
        }
        
    }
}
