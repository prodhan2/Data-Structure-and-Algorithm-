#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixtoPostfix(string s) {
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            while (i < s.length() && isdigit(s[i])) {
                res += s[i];
                i++;
            }
            res += ' ';
            i--;
        } else if (s[i] == '(') {
            st.push(s[i]);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        } else {
            while (!st.empty() && prec(st.top()) >= prec(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int evaluation(string sp) {
    stack<int> st;
    for (int i = 0; i < sp.length(); i++) {
        if (isdigit(sp[i])) {
            int num = 0;
            while (i < sp.length() && isdigit(sp[i])) {
                num = num * 10 + (sp[i] - '0');
                i++;
            }
            st.push(num);
            i--;
        } else if (sp[i] != ' ') {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            switch (sp[i]) {
                case '+': st.push(y + x); break;
                case '-': st.push(y - x); break;
                case '*': st.push(y * x); break;
                case '/': st.push(y / x); break;
                case '^': st.push(pow(y, x)); break;
            }
        }
    }
    return st.top();
}

int main() {
    cout << "Enter a string" << endl;

    string expression = "(2-5/4)*(6/7-8)"; // Example expression
    string postfix = infixtoPostfix(expression);
    cout << "Postfix: " << postfix << endl;

    int result = evaluation(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
