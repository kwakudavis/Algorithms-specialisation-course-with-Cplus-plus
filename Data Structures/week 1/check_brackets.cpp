#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, int position) :
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    int errorIndex = 1;
    getline(std::cin, text);

    std::stack <Bracket> opening_brackets_stack;
    

    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];



        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
            opening_brackets_stack.push(Bracket(next, position));

          
            
        }

        
      
        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here

            if (opening_brackets_stack.empty()) {
                std::cout << position + 1;
                return 0;
            }
           

            Bracket Brac = opening_brackets_stack.top();

           
           
            opening_brackets_stack.pop();
            if (!Brac.Matchc(next)) {
                
                std::cout << position + 1;
                return 0;
                
            }


        }

    }

  
 
    if (!opening_brackets_stack.empty()) {
     
        std::cout << opening_brackets_stack.top().position+1;
        return 0;
    }

    std::cout << "Success";
    return 0;
}