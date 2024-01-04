#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>b>>a;
	    vector<int> v(n);
	    for(int i = 0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    int bob = 0, alice = 0, ba = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(v[i]%b == 0 && v[i]%a == 0)
	        {
	            ba++;
	        }
	        else if(v[i]%b == 0)
	        {
	            bob++;
	        }
	        else if(v[i]%a == 0)
	        {
	            alice++;
	        }
	        
	    }
            cout<< (bob > alice - (ba > 0) ? "BOB\n" : "ALICE\n");
	    
	}

}
