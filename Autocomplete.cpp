#include "Autocomplete.h"

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> result;
    for (int i = 0; i < words.size(); i++) {
        int j = 0;
        if (partialWord.length() <= words[i].size()) {
            while (j <= partialWord.length() - 1 && words[i][j] == partialWord[j]) {
                if (j >= partialWord.length() - 1) {
                    result.push_back(words[i]);
                }
                j++;
            }
        }
    }
    return result;
}

void Autocomplete::insert(std::string word) {
    words.push_back(word);
    return;
}
