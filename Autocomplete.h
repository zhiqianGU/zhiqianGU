#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include<vector>
#include<iostream>
class Autocomplete(
public:
	std::vector<string> getSuggestions(std::string partialWord)
		void insert(std::string word);
private:
	std::vector<std::string> words;
}