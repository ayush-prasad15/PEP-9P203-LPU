#include <iostream>
using namespace std;


void deploy(int x, int &top, int stack[] ){
    stack[++top] = x;
}

int rollback(int &top, int stack[]){
    if (top<=1){
        return -1;
    }
    top--;
    return stack[top];
}

int main(){
    int stack[50];
    int top = 0;
    //case - 1
    deploy(10, top, stack);
    deploy(20, top, stack);
    rollback(top, stack);
    deploy(30, top, stack);
    rollback(top, stack);
    cout << rollback(top, stack) <<endl;
    
    return 0;

}