// Question 1
// Leetcode - 150. Evaluate Reverse Polish Notation

//TC- O(n)  SC -O(n)

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> s;
        int len = tokens.size();

        for(int i=0;i<len;i++){
        string st= tokens[i];
        //if not operator then keep it in num and push in stack
        if (!(st == "+" || st== "-" || st=="*" || st=="/"))
        {
            long long int num = stoi(st);
            s.push(num);
        }
        //if we get first operator then take first two elements out and do the operation and push back again
        else{
            long long int a = s.top();
            s.pop();
            long long int b=s.top();
            s.pop();
    
            if(st=="+")
                s.push(b + a);
        
            else if(st=="-")
                s.push(b - a);
            
            else if(st=="*")
                s.push(b * a);
            
            else if(st=="/")
                s.push(b / a);
            }
        }
        return s.top();
    }
};