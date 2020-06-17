#include <iostream>
#include<stack>
#include<map>
#include<string>
#include<cmath>

enum priora{
    HIGH=3,
    MEDIUM=2,
    LOW=1,
    LOWEST=0
};

std::map<char, priora> prioritet{
    {'^', HIGH},
    {'*', MEDIUM},
    {'/', MEDIUM},
    {'+', LOW},
    {'-', LOW},
    {'(', LOWEST},
    {')', LOWEST},
};

std::string readuntil(std::string input, std::string del){
    static std::string laststr = input;
    static int lastpos = 0;

    if (input!= ""){
        lastpos = 0;
        laststr = input;
    }

    if(lastpos == -1) return "";

    int begin = lastpos;
    int end = laststr.find(del, lastpos);
    if(end!=-1){
        lastpos = end + del.size();
        return laststr.substr(begin, end-begin);
    }
    else{
        lastpos = -1;
        return laststr.substr(begin);
    }
}

std::string reversepn(std::string input){
    std::stack<char> stack;
    std::string output;
    std::string substr = readuntil(input, " ");
    while(substr!= ""){

        if(substr[0]>='0' && substr[0]<='9'){
            output+=substr + " ";
        }
        else if(substr[0]=='('){
            stack.push('(');
        }
        else if(substr[0]==')'){
            while(!stack.empty() && stack.top()!= '('){
                output += stack.top();
                output += " ";
                stack.pop();
            }
            if(!stack.empty()) stack.pop();
        }
        else { // операторы
            // 1
            while(!stack.empty() &&
                  (prioritet[stack.top()] > substr[0] || (substr[0] != '^' && prioritet[stack.top()] == prioritet[substr[0]]))){
                output += stack.top();
                output += " ";
                stack.pop();
            }
            // 2
            stack.push(substr[0]);
        }

        substr = readuntil("", " ");
    }

    while(!stack.empty()){
        output+=stack.top();
        output+= " ";
        stack.pop();
    }

    return output;
}

double calcul(std::string input){
    std::stack<double> stack;
    std::string substr = readuntil(input, " ");

    while(substr!= ""){

        if(substr[0]>= '0' && substr[0]<= '9'){
          stack.push(std::stod(substr));
        }
        else{
          double a, b, c;
          b = stack.top(); stack.pop();
          a=stack.top(); stack.pop();

          switch (substr[0]) {
          case '+': c = a + b;
              break;
          case '-': c = a - b;
              break;
          case '*': c = a * b;
              break;
          case '/': c = a / b;
              break;
          case '^': c = pow(a, b);
              break;
          }
          stack.push(c);
        }
      substr = readuntil("", " ");
    }

    return stack.top();
}

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::string conv = reversepn(input);
    std::cout<< conv<< '\n'<<calcul(conv);
}
