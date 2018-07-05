#include <vector>
using namespace std;

int main() {
		int T;
		cin>>T;
		while(T>0)
		{
		    long long int P = 1;
		    int count = 0;
		    int N;
		    cin>>N;
		    vector<long long int> a;
		    long long int K;
		    cin>>K;
		    for (int i =0; i<N;i++)
		    {
		        long long int t;
		        cin>>t;//= sc.nextInt();
		        a.push_back(t);
		    }
		    for (int start=0, end=0; end<N; end++)
		    {
		        P = P*a[end];
		        
		        while(start<end && P>=K)
		        {
		            P = P/a[start++];
		        }
		        if (P<K)
		        {
		            long long int semicount = end-start+1;
		            count = count + semicount;
		        }
		        
		    }
		    cout<<count<<"\n";
		    T--;
		}
	return 0;
}