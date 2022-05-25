#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
//set mentains internally the ascending order of these numbers
void set()
{
	set<int> S;
	S.insert(1);
	S.insert(2);
	S.insert(-1);
	S.insert(-10);
	S.erase(1);//to remove an element
	
	//Print all the values of the set in ascending order
	for(int x:S){
		cout<<x<<" ";
	}
	
	//check whether an element is present in a set or not
	auto it = S.find(-1);//this will return an iterator to -1
	//if not present it will return an iterator to S.end()
	
	if (it == S.end()){
		cout<<"not Present\n";
	}else{
		cout <<" present\n";
		cout << *it <<endl;
	}
	//iterator to the first element in the set which is
	//greater than or equal to -1
	auto it2 = S.lower_bound(-1);
	//for strictly greater than -1
	auto it3 = S.upper_bound(-1);
	//print the contents of both the iterators
	cout<<*it2<<" "<<*it3<<endl;
}
	
int main() {
	set();
	return 0;
}