//
// Created by user on 16/12/18.
//

#ifndef PROJECT_LEXERPARSER_H
#define PROJECT_LEXERPARSER_H

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class LexerParser {

private:
    map<string,double > varMap;
    vector<string> lexeredWord;

public:
    vector<string> splitter(string);
    void parser(vector <string> stringVector);
    map<string,double > getVarMap() {
        return this->varMap;
    }
    vector<string> getLexeredWord() {
        return this->lexeredWord;
    }
};


#endif //PROJECT_LEXERPARSER_H