#include "Autocomplete.h"
std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord)
{std::vector<std::string> result; 
for (int i = 0; i < words.length(); i++) {
	int j = 0;
	if (partialWord.length() <= words[i].length()) {
		while (j <= partialWord.length() - 1 && words[i][j] == partialWord[j]) {
			if (j >= partialWord.length() - 1) {
				(result.add(words[i]);
			}
			j++;
		}
	}
}
			return result;
}

void Autocomplete::insert(std::string word)
{
	words.add(word);
	return;
}
