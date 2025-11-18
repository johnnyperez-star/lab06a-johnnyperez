// WordCount.cpp

#include "WordCount.h"

using namespace std;

// Default constructor
WordCount::WordCount() {}

// Simple hash function. Do not modify.
size_t WordCount::hash(std::string word) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < word.size(); i++) {
		accumulator += word.at(i);
	}
	return accumulator % CAPACITY;
}

int WordCount::getTotalWords() const {
	int wordOccurence = 0;
	for (const auto& vec : table){
		for (const auto& pair : vec){
			wordOccurence += pair.second;
		}
	}
	return wordOccurence;
}

int WordCount::getNumUniqueWords() const {
	int uniqueWords = 0;
	for (size_t i = 0; i < CAPACITY; i++){
		uniqueWords += table[i].size();
	}
	return uniqueWords;
}

int WordCount::getWordCount(std::string word) const {

	return -1;
}
	
int WordCount::incrWordCount(std::string word) {
	// STUB
	return -1;
}

int WordCount::decrWordCount(std::string word) {
	// STUB
	return -2;
}

bool WordCount::isWordChar(char c) {
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A') { return true;}
	else { return false; }
}

std::string WordCount::makeValidWord(std::string word) {
	int firstCharIndx = -1;
	int lastCharIndx = -1;
	std::string subString = "";
	std::string validWord = "";

	for (size_t i = 0; i < word.length(); i++){
		if (isWordChar(word[i]) == true){
			firstCharIndx = i;
			break;
		}
	}

	if (firstCharIndx != -1){
		for(int i = word.length() - 1; i >= 0; i--){
			if(isWordChar(word[i]) == true){
				lastCharIndx = i;
				break;
			}
		}
	}

	if (firstCharIndx == -1){
		return "";
	}

	subString = word.substr(firstCharIndx, lastCharIndx - firstCharIndx + 1);

	for (char ch : subString){
		if (isWordChar(ch) == true || ch == '\'' || ch == '-'){
			validWord += std::tolower(ch);
		}
	}
	return validWord;
}
