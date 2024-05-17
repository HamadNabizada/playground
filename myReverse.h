#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <list>

#include <algorithm>

using namespace std;

void myReverse(list<int> & linkedList){

	auto begin = linkedList.begin();
	auto end = linkedList.end();
	end--;
	int counter = 0;
	while(begin != end && counter < linkedList.size()/2){
		counter++;
		swap(*begin,*end);
		begin++;
		end--;
	}
}