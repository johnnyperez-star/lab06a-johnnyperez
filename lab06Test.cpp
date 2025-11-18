#include "tddFuncs.h"
#include "WordCount.h"
#include <iostream>
#include <string>
#include <vector>
#include <utility> 
#include <cctype>

int main(){

    WordCount wordCount {};
    
    std::cout << "Testing Empty Hash Table\n";
    std::cout << "getTotalWords: " << wordCount.getTotalWords() << '\n';
    std::cout << "getNumUniqueWords: " << wordCount.getNumUniqueWords() << '\n';
    std::cout << "getWordCount('testing'): " << wordCount.getWordCount("testing") << '\n';
    std::cout << "getWordCount('23--23'): " << wordCount.getWordCount("23--23") << '\n';

    std::cout << "----------------\n";
    
    std::cout << "Testing makeValidWord\n";
    std::cout << "makeValidWord('valid'): " << wordCount.makeValidWord("valid") << '\n';
    std::cout << "makeValidWord('--maybe'-valid--1'): " << wordCount.makeValidWord("--maybe'-valid--1") << '\n';
    std::cout << "makeValidWord('-------'): " << wordCount.makeValidWord("-------") << '\n';
    std::cout << "makeValidWord('123231'): " << wordCount.makeValidWord("123231") << '\n';
    std::cout << "makeValidWord('''''): " << wordCount.makeValidWord("'''") << '\n';
    

}