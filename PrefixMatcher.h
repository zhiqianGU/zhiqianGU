#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include<vector>
#include<iostream>
#include<math>
class PrefixMatcher {
public:
	int selectRouter(std::string networkAddress);
	void insert(std::string address, int routerNumber);
private:
	std::vector<std::string> addresses;
	std::vector<int> numbers;
}