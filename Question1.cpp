#include <iostream>
using namespace std;

int size = 0;
int A[50];

void create(){
    cout << "Enter size of array" << endl;
    cin >> size;
    cout << "Enter elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> A[i];
    }
}

void display(){
    if(size == 0){
        cout << "Create an array first" << endl;
        create();
    }
    else{
        for(int i = 0; i < size; i++){
            cout << A[i] << " ";
        }
        cout << endl;
    }
}

void insert(){
    display();
    int pos, val;
    cout << "What do you want to insert? ";
    cin >> val;
    cout << "Which position (0-based index)? ";
    cin >> pos;

    if(pos < 0 || pos > size || size >= 50){
        cout << "Invalid position or array full" << endl;
        return;
    }

    for(int i = size - 1; i >= pos; i--){
        A[i+1] = A[i];
    }
    A[pos] = val;
    size++;

    cout << "Array after insertion: " << endl;
    display();
}

void del(){
    display();
    int pos;
    cout << "Delete element from which position (0-based index)? ";
    cin >> pos;

    if(pos < 0 || pos >= size){
        cout << "Invalid position" << endl;
        return;
    }

    for(int i = pos; i < size - 1; i++){
        A[i] = A[i+1];
    }
    size--;
    display();
}

void search(){
    cout << "Which element do you want to look for? ";
    int val;
    cin >> val;

    bool found = false;
    for(int i = 0; i < size; i++){
        if(A[i] == val){
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Element not found" << endl;
    }
}

int main(){
    int value = 0;

    while(value != 6){
        cout << "\nWhich function would you like to perform? : \n"
             << "1. Create an array\n"
             << "2. Display an array\n"
             << "3. Insert an element in the array\n"
             << "4. Delete an element in the array\n"
             << "5. Search an element\n"
             << "6. Exit\n";
        cin >> value;

        switch(value){
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: del(); break;
            case 5: search(); break;
            case 6: cout << "Exiting menu\n"; break;
            default: cout << "Choose a valid option\n";
        }
    }

    return 0;
}
