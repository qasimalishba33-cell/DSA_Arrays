#include<iostream>
using namespace std;
int main(){
int arr[9] = { 10 , 20 ,30 , 40, 50 , 60 , 70 , 80 , 90};
int n = 9;
int first , last , mid , search_val , loc;
bool found = false;
cout<<"\n Array Elements are : ";
for ( int i = 0 ; i < n; i++){
cout<<arr[i]<<" ";
}

first = 0;
last = n - 1;

cout<<"\n Enter the element you want to search : ";
cin>>search_val;

 
while (first <= last){
mid = (first  + last)/2;
if(arr[mid] == search_val){
	found = true;
	loc = mid;
	break;
	}
	
else if (arr[mid] < search_val){
	first = mid + 1;
	}
		
else{
last = mid - 1;
}
}

if(found == true){
cout<<"\n Element is found at index "<<loc<<"\n Search is successful";
}

else{
cout<<"\n Element is not found ..."<<"\n Search is unsuccessful";
}

return 0;
}

