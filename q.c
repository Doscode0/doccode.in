#include<stdio.h>
#define MAX_SIZE 3
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
int main(){
    int choice,item;
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    while (1)
    {
    printf("Enter your choice:- ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
    {
        if(rear==MAX_SIZE)
        {
            printf("Overflow & Exit...\n");
        }else{
            printf("Enter the number:- ");
            scanf("%d",&item);
            if(front == -1)
            {
                front = rear = 0;
            }else{
                rear++;
            }
            queue[rear] = item;
            printf("Item Inserted \n");
        }
    }break;
    case 2:
    {
        if(front == -1)
        {
            printf("Underflow & Exit... \n");
        }else{
            item = queue[front];
            if(front == rear){
                front = rear = -1;
            }else{
                front++;
            }printf("Item Deleted:- \n");
        }break;
    }
    case 3:
    {
        if(front == -1){
            printf("Queue is empty.\n");
        }else{
            printf("Queue element:- ");
            for(int i=front;i<=rear;i++){
                printf("%d ",queue[i]);
            }printf("\n");
        }break;
    }
    case 4:{
        printf("Exit\n");
        return 0;
    }
    default:
        break;
    }
    }
}