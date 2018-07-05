
import java.util.*;
import java.io.*;

class GFG {
    
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt()
        {
            return Integer.parseInt(next());
        }
 
        long nextLong()
        {
            return Long.parseLong(next());
        }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }
    
    
	public static void main (String[] args) {
	    FastReader fs = new FastReader();
	    int T = fs.nextInt();
	    while(T>0)
	    {
	        int N = fs.nextInt();
	        ArrayList<String> arrlist = new ArrayList<String>();
	        LinkedList<String> ll= new LinkedList<String>();
	        Set<String> mySet = new HashSet<String>();
	        String [] arr = fs.nextLine().split(" ");
	        for (int i = 0; i<arr.length; i++)
	        {
	            if (i==0)
	            {
	                ll.addLast(arr[i]);
	                arrlist.add(arr[i]);
	                mySet.add(arr[i]);
	            }
	            else
	            {
	            	if (mySet.contains(arr[i]))
	            	{
	            		if (ll.contains(arr[i]))
	            		{
	            			ll.remove(arr[i]);
	            			if (ll.size()==0)
	            			{
	            				arrlist.add("-1");
	            			}
	            			else
	            			{
	            				arrlist.add(ll.getFirst());
	            			}
	            		}
	            		else
	            		{
	            		    if (ll.size()!=0)
	            		    {
	            		    	arrlist.add(ll.getFirst());
	            		    }
	            		    else
	            		    {
	            		    	arrlist.add("-1");
	            		    }
	            		}
	            	}
	            	else
	            	{   mySet.add(arr[i]);
	            		ll.addLast(arr[i]);
	            		arrlist.add(ll.getFirst());
	            	}
	            }
	        }
	        
	        for (String s : arrlist)
	        {
	            System.out.print(s+" ");
	        }
	        System.out.println();
	        T--;
	    }
	}
}