//stack follows lifo 
//stack of plates 
void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.emplace(5); //{5, 3, 2, 1}

    cout<<st.top(); //prints 5
    st.pop(); //{3, 2, 1}
}
//QUEUE : FIFO 
//A QUEUE OF LINE