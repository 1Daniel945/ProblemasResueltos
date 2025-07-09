// C++ program to demonstrate 
// the working of unordered set 
// of pairs 
#include <bits/stdc++.h> 
using namespace std; 

// Hash function 
struct hashFunction 
{ 
size_t operator()(const pair<int , 
					int> &x) const
{ 
	return x.first ^ x.second; 
} 
}; 

// Function to print unordered set elements 
void print(unordered_set<pair<int, int>, 
		hashFunction> &myUnorderedSet) 
{ 
// Iterating over unordered set elements 
for (auto currentPair : myUnorderedSet) 
{ 
	// Each element is a pair itself 
	pair<int, int> pr = currentPair; 

	cout << "[ "; 

	// Printing pair elements 
	cout << pr.first << " " << 
			pr.second; 
	cout << " ]"; 
	cout << "\n"; 
} 
} 

// Driver code 
int main() 
{ 
// Declaring an unordered set of pairs 
unordered_set<pair<int, int>, 
hashFunction> myUnorderedSet; 

// Initializing pairs of int type 
pair<int, int> pair1; 
pair1 = make_pair(4, 2); 

pair<int, int> pair2; 
pair2 = make_pair(2, 3); 

pair<int, int> pair3; 
pair3 = make_pair(2, 3); 

pair<int, int> pair4; 
pair4 = make_pair(5, 8); 

pair<int, int> pair5; 
pair5 = make_pair(9, 5); 


// Inserting pairs in the unordered set 
myUnorderedSet.insert(pair1); 
myUnorderedSet.insert(pair2); 
myUnorderedSet.insert(pair3); 
myUnorderedSet.insert(pair4); 
myUnorderedSet.insert(pair5); 

// Calling print function 
print(myUnorderedSet); 
return 0; 
}
// C++ program to demonstrate 
// the working of unordered set 
// of pairs 
#include <bits/stdc++.h> 
using namespace std; 

// Hash function 
struct hashFunction 
{ 
size_t operator()(const pair<int , 
					int> &x) const
{ 
	return x.first ^ x.second; 
} 
}; 

// Function to print unordered set elements 
void print(unordered_set<pair<int, int>, 
		hashFunction> &myUnorderedSet) 
{ 
// Iterating over unordered set elements 
for (auto currentPair : myUnorderedSet) 
{ 
	// Each element is a pair itself 
	pair<int, int> pr = currentPair; 

	cout << "[ "; 

	// Printing pair elements 
	cout << pr.first << " " << 
			pr.second; 
	cout << " ]"; 
	cout << "\n"; 
} 
} 

// Driver code 
int main() 
{ 
// Declaring an unordered set of pairs 
unordered_set<pair<int, int>, 
hashFunction> myUnorderedSet; 

// Initializing pairs of int type 
pair<int, int> pair1; 
pair1 = make_pair(4, 2); 

pair<int, int> pair2; 
pair2 = make_pair(2, 3); 

pair<int, int> pair3; 
pair3 = make_pair(2, 3); 

pair<int, int> pair4; 
pair4 = make_pair(5, 8); 

pair<int, int> pair5; 
pair5 = make_pair(9, 5); 


// Inserting pairs in the unordered set 
myUnorderedSet.insert(pair1); 
myUnorderedSet.insert(pair2); 
myUnorderedSet.insert(pair3); 
myUnorderedSet.insert(pair4); 
myUnorderedSet.insert(pair5); 

// Calling print function 
print(myUnorderedSet); 
return 0; 
}
