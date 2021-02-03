bool ispar(string x)
{
    stack<char>st;
    for(auto i : x)
    {
        if(i == '('){
            st.push(')');
        }

        else if(i == '{'){
            st.push('}');
        }

        else if(i == '['){
            st.push(']');
        }

        else if( st.empty() || st.top() != i){
            return false;
        }

        else if(st.top() == i){
            st.pop();
        }
           
    }
    return st.empty();
}