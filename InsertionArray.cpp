#include<iostream>
using namespace std;
int main(){
int size = 5;
int arr[5]  = { 10 ,20 ,30 ,40, 50};
int pos , val;

for ( int i = 0; i < size; i++){
cout<<"\n Element at index "<< i <<" : "<<arr[i];
}

cout<<"Enter the position to insert an element in array"<<endl;
cin>>pos;

cout<<"\n Enter the value of element : ";
cin>>val;

for (int i = size - 1; i >= pos ; i--){
arr[i + 1] = arr[i];
}
 
size = size + 1;
arr[pos] =  val;

for (int i = 0 ; i < size; i++){
cout<<"\n Element at index " << i <<" : "<<arr[i];
}

cout<<"Total no of elements = "<<size;
return 0;

}
