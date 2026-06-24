#include<iostream>
using namespace std;
int main(){
int arr[9] = {5 , 12, 18 , 23, 34,45, 56,67,78};
int n = 9;
int loc , search_val;
bool found = false;
cout<<"\n Elements of Array is : ";

for ( int i = 0; i < n; i++){
cout<<arr[i]<<" ";
}

cout<<"\n Enter the element you want to search : ";
cin>>search_val;

for(int i = 0; i < n; i++){

if(search_val == arr[i]){
	found = true;
	loc = i;
	break;
	}
	}

if(found == true){
cout<<"\n Element found at index "<<loc<<"\n Search is successful";
}
else{
cout<<"\n Element is not found "<<"\n Search is unsuccessful";
}

return 0 ;
}
