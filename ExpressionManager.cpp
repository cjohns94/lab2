#include "ExpressionManager.h"

const string OPEN = "([{";
const string CLOSED = ")]}";

ExpressionManager::ExpressionManager(){
    
}

ExpressionManager::~ExpressionManager(){
    
}

static bool isOpen(char ch){
    return OPEN.find(ch) != string::npos;       //Finds char in OPEN string and returns true if it exists
}
static bool isClosed(char ch){
    return CLOSED.find(ch) != string::npos;
}

bool ExpressionManager::isBalanced(std::string expression){
	/*
	* Checks whether an expression is balanced on its parentheses
	*
	* - The given expression will have a space between every number or operator
	*
	* @return true if expression is balanced
	* @return false otherwise
	*/
	
	//Create an empty stack of characters
	stack<char> paren_stack;
	
	//Assume expression is balanced
	 bool balanced = true;
	 
	//Set index to 0
	//Iterate through given string
	for(string::iterator iter = expression.begin(); balanced && (iter != expression.end()); iter++){
	    char next_char = *iter;
	    if(isOpen(next_char)){
	        paren_stack.push(next_char);        //Add open paren to stack
	    }else if (isClosed(next_char)){
	        if(paren_stack.empty()){
	            balanced = false;
	        }else{
	            char top_char = paren_stack.top();
	            paren_stack.pop();
	            balanced = OPEN.find(top_char) == CLOSED.find(next_char);       //returns true if top_char position is the same as next_char position
	        }
	    }
	}
	//while(balanced is true && index < expressionlength)
	//{get next character in data string
	//  if(next character is opening parenthesis)
	//      {push onto stack}
	//  else if(next character is closing parenthesis)
	//      {pop the stack
	//      if(stack is empty || top does not match closing parenthesis)
	//      {set balanced to false}
	//      }
	//      }
	//return true if balanced and stack is empty, otherwise return false
	
    return true;
}

string ExpressionManager::postfixToInfix(std::string postfixExpression){
    return NULL;
}

string ExpressionManager::postfixEvaluate(std::string postfixExpression){
    return NULL;
}

string ExpressionManager::infixToPostfix(std::string infixExpression){
    return NULL;
}

