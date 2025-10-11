#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isMatching(char opening,char closing){
    return(opening='{' && closing=='}'||opening=='(' && closing==')' ||opening=='[' && closing==']');
}
bool isBalanced(string str){
    stack<char>st;
for(char ch:str){
    if(ch=='('||ch=='{'||ch=='['){
        st.push(ch);
    }
    else if(ch==')'||ch=='}'||ch==']'){
        if(st.empty()||!isMatching(st.top(),ch)){
            return false;
        }
        else{
            st.pop();
        }
    }

}
return st.empty();
}