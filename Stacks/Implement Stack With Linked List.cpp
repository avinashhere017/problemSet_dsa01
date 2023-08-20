/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here

    Node* top;



public:
    Stack()
    {
        //Write your code here
        top=NULL;
        
    }

    int getSize()
    {
        //Write your code here
        int size=0;
        if(top==NULL){
            return 0;
        }else{
            Node* temp = top;
            while(temp!=NULL){
                size++;
                temp=temp->next;
            }
        }
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return (top==NULL);
    }

    void push(int data)
    {
        //Write your code here
        Node* element = new Node(data);
        element->next=top;
        top = element;
        // size++;
    }

    void pop()
    {
        //Write your code here
        if(top==NULL){
            return;
        }
        Node* temp = top;
        top=top->next;
        temp->next=NULL;
        // size--;
    }

    int getTop()
    {
        //Write your code here
        if (top != NULL) {
            return top->data;
        }else{
            return -1;
        }
    }
};
