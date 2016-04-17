#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,q;
    cin>>n;
    int a[n+1];
    cin>>k;
    cin>>q;
  
    for (int i=0;i<n;i++)
    {cin>>a[i];
    }
    int qu;
    

	for (int l=0;l<q;l++)
	{
		
	
	cin>>qu;
	
	cout<<a[(qu-k)%n];
        cout<<"\n";
}
    return 0;
}
