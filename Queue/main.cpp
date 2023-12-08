#include <iostream>
#include <queue>
using namespace std;

void display(queue<string> q);

int main() {

  // create a queue of string
  queue<string> thing;
  int f = 0;

   do{

      cout << "what operation you want to do: " << endl;
      cout << "1- enqueue" << endl;
      cout << "2- dequeue" << endl;
      cout << "3- display" << endl;
      cout << "4- Exit" << endl;
      cout << "enter the number: ";
      cin >> f;

      if(f == 1){
        int c;
        cout << "how many elements you want to enqueue: ";
        cin >> c;
        for(int i = 1; i <= c; i++){
            string e;
            cout << "enter element " << i << ": ";
            cin >> e;
            // push element into the queue
            thing.push(e);
        }
      }

      else if(f == 2){
        int c;
        if(thing.empty()){
            cout << "the queue is empty" << endl;
        }
        else{
            // pop element out of the queue
            thing.pop();
        }
      }

      else if(f == 3){
        cout << "elements: ";
        display(thing);
      }

      } while(f != 4);

  return 0;
}

// function to display queue
void display(queue<string> q) {
    if(q.empty()){
        cout << "queue is empty" << endl;
    }
    else {
        while(!q.empty()) {
            cout << q.front() << ", ";
            q.pop();

  }
  cout << endl;
    }
}
