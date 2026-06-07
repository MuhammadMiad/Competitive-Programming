#include<bits/stdc++.h>
using namespace std;
class MaxHeap{

  int *arr;
  int size;///total elements in heap
  int total_size; ///total size of array

  public:
  MaxHeap(int n){
  arr=new int(n);
  size=0;
  total_size=n;
  }

  ///insert into the heap
  void Insertion(int value){
      ///if heap size is available  or not
      if(size==total_size){
        cout<<"Heap OverFlow."<<endl;
        return;
      }

      arr[size]=value;
      int index=size;
      size++;

      ///compare it with its parent
      while(index>0&&arr[(index-1)/2]<arr[index]){
        swap(arr[(index-1)/2],arr[index]);
        index=(index-1)/2;
      }
      cout<<arr[index]<<" is inserted into the heap"<<endl;


  }
  void Heapify(int index){
  int largest=index;
  int left=2*index+1;
  int right=2*index+2;

  ///largest will store the index of the element which
  ///is greater between parent,left child and right child

  if(left<size && arr[left]>arr[largest])
    largest=left;
  if(right<size&&arr[right]>arr[largest])
    largest=right;

  if(largest!=index){
    swap(arr[index],arr[largest]);
    Heapify(largest);
  }
  }
  ///Delete from Heap
  void Delete(){
  if(size==0){
    cout<<"Heap  Underflow."<<endl;
    return;
  }

  cout<<arr[0]<<" Delete from the Heap."<<endl;

  arr[0]=arr[size-1];
  size--;
  if(size==0)
    return;

  Heapify(0);

  }

  ///Display Function
  void print(){
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  }


};
int main(){
 int t;
 cout<<"Enter Size of Heap:"<<endl;
 cin>>t;
 MaxHeap H1(t);
 while(1){
 cout<<"Choice Following Option:"<<endl;
 cout<<" 1.Insertion \n 2.Delete \n 3.Display \n 4.Clear Display \n 5.Exit \n Enter Option No:"<<endl;
 int x;
 cin>>x;
 switch(x){
 case 1:
     int key;
     cout<<"Enter value:"<<endl;
     cin>>key;
     H1.Insertion(key);
    break;
 case 2:
     H1.Delete();
    break;
 case 3:
     cout<<"Display Heap"<<endl;
     H1.print();
     cout<<endl;
    break;
 case 4:
   system("CLS");
    break;
 case 5:
   exit(0);
    break;
 default:
    cout<<"Invalid  Choice.Please  Try  Again ."<<endl;
 }
 }
// H1.Insertion(34);
// H1.Insertion(20);
// H1.Insertion(5);
// H1.Insertion(40);
// H1.Insertion(14);
// H1.Insertion(10);

// H1.Delete();
//
// H1.print();
return 0;
}
