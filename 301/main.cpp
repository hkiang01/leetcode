#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {

private:
	typedef struct Node {
		Node* next;
		Node* prev;
		Node* closed;
		Node* oppen;
		int index;
		char val;
	} Node;		
	Node* createList(string s);
	void printList(Node* list);
	void deleteList(Node* list);
	void pairParensInList(Node* list);
public:
	vector<string> removeInvalidParentheses(string s);
};

void Solution::printList(Node* list) {
	//recursive
	if(list == NULL) {
		cout << endl;
		return;
	}
	cout << list->val;
	printList(list->next);
}

void Solution::deleteList(Node* list) {
	//recursive, deletes in reverse order
	if(list->next != NULL) {
		deleteList(list->next);
	}
	delete list;
}

void Solution::pairParensInList(Node* list) {
	//Node* closed = list;
	//Node* curr = list;
	//if(closed->val != ')' && closed->next != NULL) closed = closed->next;
	return;
}

Solution::Node* Solution::createList(string s) {
	if(s.empty()) return NULL;
	Node* list = new Node();
	Node* curr = list;

	//first element
	curr->val = s[0];
	curr->index = 0;

	//the rest
	int counter = 1;
	for(unsigned int i = 1; i < s.size(); i++) {
		Node* newNode = new Node();
		newNode->val = s[i];
		newNode->index = counter;
		newNode->prev = curr;
		curr->next = newNode;
		curr = newNode;
		counter++;
	}
	return list;
}

vector<string> Solution::removeInvalidParentheses(string s) {
	vector<string> retval;
	Node* list = createList(s);
	printList(list);
	deleteList(list);
	return retval;
}

int main(int argc, char* argv[]) {
	cout << "test" << endl;
	Solution* sol = new Solution();
	vector<string> results;
	string s("()())()");
	sol->removeInvalidParentheses(s);
	delete sol;
}
