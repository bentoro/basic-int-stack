#include <iostream>   
#include "basic_int_stack.h" 
using namespace std;

int main (int argc, char * const argv[]) {
	Basic_int_stack s1;
	Basic_int_stack s2;
	Basic_int_stack s3;

	cout << " Benedict Lo" << endl;
	cout << " Bslo" << endl;
	cout << " 301149335"  << endl;

	int x=0;
	int lim=0;
	int sum=0;

	cout << " Please enter a sequence of values:" << endl;	
	for (int i=0; i<5; i++){
	cin >> x;
	if (x<=0){
	i=6;
	} else {
	s1.push(x);
	lim++;
	}
	}

	cout << endl << s1.size() << endl;

	for (int j=0; j<lim; j++){
	sum+= s1.top();
	s2.push(s1.top());
	s1.pop();
	}

	cout << sum << endl;
	cout << endl;

	for (int k=0; k<lim; k++){
	cout << s2.top() << endl;
	s2.pop();
	}	
	
	cout << endl << "goodbye" << endl;
    return 0;
}

