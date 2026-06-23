#include<iostream>
using namespace std;
int main(){
int size = 5;
int arr[10]  = { 10 ,20 ,30 ,40, 50};
int pos , value;

for ( int i = 0; i < size; i++){
cout<<"\n Element at index "<< i <<" : "<<arr[i];
}

cout<<"\n Enter the position of element you want to delete (0 - 5) : ";
cin>>pos;

value = arr[pos];
for (int i = pos; i < size ; i++){
arr[i] = arr[i + 1];
}

size = size - 1;
cout<<"\n Element deleted from an array : "<<value;
cout<<"\n Size of an array is : "<<size;
for (int i = 0 ; i < size; i++){
cout<<"\n Elements in an array at index  "<< i <<  " : "<<arr[i];
}

return 0 ;
}




