#include<bits/stdc++.h>
using namespace std;

// A Method that returns multiple values using
// tuple in C++.
tuple<int, int, char> foo(int n1, int n2)
{
	// Packing values to return a tuple
	return make_tuple(n2, n1, 'a');			
}

// Driver code
int main()
{
	int a = 0;
	int b = 1;
	char cc = 'b';
	
	// Unpack the elements returned by foo
	tie(a, b, cc); 
	
	cout << "Values returned by tuple: ";
	cout << a << " " << b << " " << cc;
	
	return 0;
} // End Driver
