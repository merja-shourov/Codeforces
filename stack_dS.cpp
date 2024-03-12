#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top;
    int size;
    int *arr;

    public:
        Stack( int size ){
            this->size = size;
            top = -1;
            arr = new int[size];
        }

        void push( int val ){
            top++;
            if( top < size ){
                
                arr[top] = val;
            }else{
                cout << "Stack Overflow\n";
            }
        }

        void pop( ){
            if( top == -1 ){
                cout << "Stack Underflow\n";
            }else{
                top--;
            }
        }

        void is_empty(){
            if( top == -1 ){
                cout << "Empty";
            }else{
                cout << "Not Empty\n";
            }
        }

        void peak(){
            if( top == -1 ){
                cout << "No peak";
            }else{
                cout << arr[top] << endl;
            }
        }
};
int main(void){
    Stack s(2);
    s.push(40);
    s.push(4);
    // s.push(6);
    // s.push(67);

    // s.peak();
    s.is_empty();
    return 0;
}