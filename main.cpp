#include "playground.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <list>

#include <algorithm>
#include "myReverse.h"

using namespace std;


int main()
{
	list<int> linkedList;
	linkedList.push_front(1);
	linkedList.push_front(2);
	linkedList.push_front(3);
	linkedList.push_front(3);
	linkedList.push_front(4);
	linkedList.push_front(1);

	cout << "Before Reverse: " << endl;
	for(auto elem : linkedList){
		cout << elem << " ";
	}
	cout << endl;

	myReverse(linkedList);

	return EXIT_SUCCESS;
}
