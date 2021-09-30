#include<stdio.h>
#include<stdlib.h>

//Global Variable

int size,ch,i;

//creating Stack

struct stack{
    int arr[100];
    int top;
}st;

//Insert Element

void push(){
    int ele;
    if(st.top==size-1){
        printf("\nStack is Full..");
    }else{
        st.top++;
        printf("\nEnter a Value:");
        scanf("%d",&ele);
        st.arr[st.top]=ele;
    }
}

//Removing element
void pop(){
    if(st.top==-1){
        printf("Empty Stack");
    }else{
        int out;
        out=st.arr[st.top];
        st.top--;
        printf("%d",out);
    }
}

//Peek element

void peek(){
    int display;
    if(st.top==-1){
        printf("\nEmpty Stack");
    }
    else{
        display=st.arr[st.top];
    }
    printf("%d",display);
}
void display(){
    if(st.top>=0){
        for(i=st.top;i>=0;i--){
            printf("\n\t%d",st.arr[i]);
        }
    }else{
        printf("\nNo Elements to display....");
    }
}
    

int main(){
    st.top=-1;
    printf("Enter a Stack Size:");
    scanf("%d",&size);
    printf("\n Stack Operations....\n");
    printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.PEEK \n\t 4.DISPLAY \n\t 5.EXIT");
    do
    {
        printf("\n\nEnter a Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:push(); break;

            case 2:pop(); break;

            case 3:peek(); break;

            case 4: display(); break;

            case 5:printf("\nEXIT Point");break;
            
            default:printf("Enter a Valid Choice(1,2,3,4,5)");break;
        }
    } while (ch!=5);
    

    return 0;
}

