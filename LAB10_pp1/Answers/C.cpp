#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
            // cout<<s[i];
        }
        else if(st.top()=='1' && s[i]=='6'){
            st.pop();
        }
        else if(st.top()=='2' && s[i]=='5'){
            st.pop();
        }
        else if(st.top()=='3' && s[i]=='6'){
            st.pop();
        }
        else if(st.top()=='4' && s[i]=='9'){
            st.pop();
        }
        else if(st.top()=='6' && s[i]=='4'){
            st.pop();
        }
        else if(st.top()=='8' && s[i]=='1'){
            st.pop();
        }
        else{st.push(s[i]);}
    }
    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
}