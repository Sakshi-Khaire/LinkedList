# Implementation of Single LinkedList in C

>A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image.

![singleLinkedList](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124319/Singly-Linked-List1.png)

* This first step is to create a structure with field ```data``` and ```a pointer of type structure``` 

```C
    typedef struct node {
        int data;
        struct node *next;
    }NODE;
```

## The following function helps in creating the node with data

```C
    NODE* createNode(int data) {

        //Using malloc for allocating memory of size NODE(i.e. size of the structure).

        //As malloc returns void* we are suppose to typecast it with the appropriate type. That's the reason why it is typecasted with (NODE* ).

        NODE* ptr = (NODE*)malloc(sizeof(NODE));

        //Setting the data to the created node data flied.

        ptr->data = data;

        //Setting NULL to the next feild of the created node.

        ptr->next = NULL;

        //Returning the created node

        return ptr;
    }
```

## Following are the function which are performing the basic functionality of single linkedList

*Please also look into the code for the clear understanding(All the important comments are being taken care of)*

```C
addAtFirst(NODE** root, int data) //Adding the node at the beginning of the linked list

addAtEnd(NODE** root, int data) //Adding the node at the end of the linked list

deleteFirst(NODE** root) //Removes the first node from the linked list pointed by root

deleteLast(NODE** root) //Removes the last node from the linked list pointed by root

```

# How to run the code

* Download the source code
* Open the terminal (in mac) for cmd (in windows) and navigate to the folder in with the source code is present
* Type the command ```gcc linkedList.c``` . This command will compile the code.
* To run the code type the command ```./a.out``` in the same terminal. This command will give you the output.