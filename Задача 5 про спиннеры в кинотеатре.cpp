#include <iostream>
#include <cstdlib>
using namespace std;

void F(int m, int d, int k, int r)
{
	int j=0;
	if(d!=0)
	{
		if (k>=r)
		{
			if (m%2==0)
			{
				k=m/2;
				j=m/2-1;
				m=k;
				d--;
				F(m,d,k,r);
			}
			else
			{
				k=m/2;
				j=m/2;
				m=k;
				d--;
				F(m,d,k,r);
			}
		}
		else
		{
			if (r%2==0)
			{
				k=r/2;
				j=r/2-1;
				r=j;
				m=k;
				d--;
				F(m,d,k,r);
			}
			else
			{
				k=r/2;
				j=r/2;
				m=k;
				d--;
				r=j;
				F(m,d,k,r);
			}
		}
		cout<<k<<endl<<j<<endl;
		exit(0);
	}
}

int main() 
{
	int p=0, l=0, n, x;
	cin>>n>>x;
	if(n%2==0)
	{
		p=n/2-1;
		l=n/2;
	}
	else
	{
		p=n/2;
		l=n/2;
	}
	F(n,x,l,p);
}
