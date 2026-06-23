#include<iostream>
using namespace std;
int main(){
int size = 4;
int arr[10]  = { 5 ,10 , 15, 20};
int pos , val;

for ( int i = 0; i < size; i++){
cout<<"\n Element at index "<< i <<" : "<<arr[i];
}

cout<<"\n Enter the position at which you want to insert an elemnt : ";
cin>>pos;

cout<<"\n Enter the value you want to insert :  ";
cin>>val;

for ( int i = size -1 ; i >= pos ; i-- ){
arr[i +  1] = arr[i] ;
}

arr[pos] = val;
size = size + 1;

for (int i = 0; i < size; i++){
cout<<"\n Element at index "<< i <<" : "<<arr[i];
}

cout<<"\n total size of an array : "<<size;
cout<<"\n Enter the position you want to delete element from it : ";
cin>>pos;

val = arr[pos];
for (int i = pos; i < size; i++){
arr[i] = arr[i + 1];
}

size = size - 1;

for (int i = 0; i < size; i++){
cout<<"\n Element at index "<< i <<" : "<<arr[i];
}

cout<<"\n Total size of array is : "<<size;
cout<<"\n Element deleted is : "<<val;

return 0;
}

