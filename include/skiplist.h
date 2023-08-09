#ifndef SKIPLIST_H
#define SKIPLIST_H

#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iostream>

struct Node {
	std::string value;
	std::vector<Node*> next;
	Node(const std::string& v, int level) : value{v}, next(level, nullptr) {}
	~Node() {}
};

class SkipList {
public:
	SkipList(int);
	~SkipList();
	void insert(const std::string&);
	void remove(const std::string&);
	bool search(const std::string&);
	void printList();
private:
	Node* head;
	int maxLevels;
};

#endif // SKIPLIST_H