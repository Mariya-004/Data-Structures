#include "Stack.cpp"
using namespace std;
class Conversion {
private:
    string postfix;
    string prefix;

public:
    Conversion();
    int precedence(char);
    string infix_to_postfix(string);
    string infix_to_prefix(string);
    
};


