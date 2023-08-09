#include "../include/skiplist.h"

SkipList::SkipList(int m) : maxLevels{m}
{
	head = new Node("", maxLevels);
}

SkipList::~SkipList() {
	Node* current = head->next[0];
    	while (current != nullptr) {
        	Node* temp = current->next[0];
        	delete current;
        	current = temp;
    	}
    	delete head;
}

void SkipList::insert(const std::string& val) {
	int level = 0;
	while (rand() % 2 == 0 && level < maxLevels - 1) {
		++level;
	}
	Node* newNode = new Node(val, level + 1);
	Node* current = head;
	for (int i = maxLevels - 1; i >= 0; --i) {
		while (current->next[i] != nullptr && current->next[i]->value < val) {
			current = current->next[i];
		}
		if (i <= level) {
			newNode->next[i] = current->next[i];
			current->next[i] = newNode;
		}
	}
}

void SkipList::remove(const std::string& val) {
	std::cout << "Removing: " << val << std::endl;
    	if (!search(val)) {
       		std::cout << "Value not found, nothing to remove." << std::endl;
        	return;
    	}
    	Node* current = head;
    	for (int i = maxLevels - 1; i >= 0; --i) {
        	while (current->next[i] != nullptr && current->next[i]->value < val) {
           		current = current->next[i];
        	}
        	if (current->next[i] != nullptr && current->next[i]->value == val) {
            		Node* toDelete = current->next[i];
            		current->next[i] = toDelete->next[i];
            		auto it = std::find(toDelete->next.begin(), toDelete->next.end(), toDelete);
            		if (it != toDelete->next.end()) {
                		toDelete->next.erase(it);
            		}
        	}
    	}
}

bool SkipList::search(const std::string& val) {
	Node* current = head;
	for (int i = maxLevels - 1; i >= 0; --i) {
		while (current->next[i] != nullptr && current->next[i]->value <= val) {
			if (current->next[i]->value == val) {
				return true;
			}
			current = current->next[i];
		}
	}
	return false;
}

void SkipList::printList() {
    	for (int i = maxLevels - 1; i >= 0; --i) {
        	Node* current = head;
        	std::cout << "Level " << i << ": ";
        	while (current->next[i] != nullptr) {
            		std::cout << current->next[i]->value << " ";
	            	current = current->next[i];
        	}
        	std::cout << std::endl;
    	}
}
