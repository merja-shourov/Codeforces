#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top;
    int *arr;
    int size;
    
    public:
        Stack( int size ){
            this-> size = size;
            top = -1;   
            arr = new int[size];
        }

        void push(int val){
            
            if( size - top > 1 ){
                top++;
                arr[top] = val;
                
            }else{
                cout << "Overflow\n";
            }
        }

        void pop(){
            if( top != -1 || top >= 0 ){
                top--;
            }else{
                cout << "Underflow\n";
            }
        }

        int peek(){
            if( top >= 0 && top < size )
                return arr[top];
            else{
                cout << "Stack is empty\n";
            }
        }

        bool isEmpty(){
            if( top == -1 ) return true;
            else false;
        }
};

int main(void){
    Stack s(2);
    s.push(1);
    s.push(2);
    
    s.peek();
    return 0;
}