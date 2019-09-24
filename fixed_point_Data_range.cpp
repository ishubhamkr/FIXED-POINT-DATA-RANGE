#include <iostream>
#include<cmath>
using namespace std;

int f(int i)
{
    int j,n;
    n=1;
    for(j=0;j<i;j++)
    {
        n=n*2;
    }
    return n;
}

int main() {
	int n,i;
	cout<<"select number of bits";
	cin>>i;
	cout<<"\nSelect the type of date";
	cout<<"\n1. unsigned data"<<"\n2. signed data"<<"\n3. 1s complement"<<"\n4. 2s complement\n";
	cin>>n;
	
	switch(n)
	{
	    case 1: cout<<"0 to "<<f(i)-1;
	        break;
	    case 2: cout<<-f(i-1)+1<<" to "<<f(i-1)-1;
	        break;
	    case 3: cout<<-f(i-1)+1<<" to "<<f(i-1)-1;
	        break;
	    case 4: cout<<-f(i-1)<<" to "<<f(i-1)-1;
	        break;
	    default: return 0;
	}
	return 0;
}
