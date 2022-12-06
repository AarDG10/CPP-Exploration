class Decoration
{
    public static void main(String[] args)
    {
        int n=8;
        char ch='A';
        for(int i=0;i<8;i++)
        {
            for(int k=0;k<n-1;k++) {
                System.out.print(" ");
            }
            n--;
            for(int j=-1;j<i;j++)
            {
                System.out.print(ch+" ");
                ch++;
                if(ch>90) ch='A';
            }
            System.out.println();
        }
    }
}