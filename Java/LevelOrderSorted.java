import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T>0)
		{
		    int N = sc.nextInt();
		    int [] a = new int[N];
		    int n = N;
		    for (int m = 0;m<N;m++)
		    {
		        a[m] = sc.nextInt();
		    }
		    int t =0;
		    int counter = 0;
		     int l = 0;
		     int i =0;
		    while(counter<N)
		    {
		        t = (int) Math.pow(2,i);
		       
		        if (counter+t>N)
		        {
		            l = N;
		        }
		        else
		        {
		            l = counter + t;
		        }
	//	        ArrayList<Integer> arr = new ArrayList<Integer>(); 
	            HashSet<Integer> arr = new HashSet<Integer>();
	            
		        for (int j=counter; j<l;j++)
		        {
		            arr.add(a[j]);
		        }
		        ArrayList<Integer> karr = new ArrayList<Integer>(arr);
		        Collections.sort(karr);
		        for (int k : karr)
		        {
		            System.out.print(k+" ");
		        }
		        System.out.println();
		        counter+=t;
		        i++;
		    }
		
		    T--;
		}
		
	}
}