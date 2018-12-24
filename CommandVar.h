//
// Created by user on 17/12/18.
//

#ifndef PROJECT_COMMANDVAR_H
#define PROJECT_COMMANDVAR_H


#include "Command.h"
#include "LexerParser.h"
#include "ExpressionFactory.h"

class CommandVar: public Command {

private:
    map<string,double&>* bindMap;
    map<string,double >* varMap;
    vector<string>::iterator* it;
    ExpressionFactory* expressionFactory;
public:
    CommandVar( map<string,double >*,vector<string>::iterator* it, map<string,double&>*,ExpressionFactory* exFac);
    virtual double excecute ();
};


#endif //PROJECT_COMMANDVAR_H
