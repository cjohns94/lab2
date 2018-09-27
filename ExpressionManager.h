#ifndef EXPRESSIONMANAGER_H
#define EXPRESSIONMANAGER_H

#include "ExpressionManagerInterface.h"

class ExpressionManager : public ExpressionManagerInterface{
    public:
        ExpressionManager();
        ~ExpressionManager();
        bool isBalanced(std::string expression);
        string postfixToInfix(std::string postfixExpression);
        string postfixEvaluate(std::string postfixExpression);
        string infixToPostfix(std::string infixExpression);
    protected:
        //bool isOpen(char ch);
        //bool isClosed(char ch);
    
};

#endif
