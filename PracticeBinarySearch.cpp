#include<iostream>
using namespace std;
int main(){
int arr[9] = {5,12,18,23,34,45,56,67,78};
int n  = 9;
int first , mid ,last , loc , search_val;
bool found = false;

cout<<"\n Array Elements are : ";

for (int i = 0 ; i < n; i++){
cout<<arr[i]<<" ";
}

cout<<"\n Enter the number you want to find in the array : ";
cin>>search_val;

first = 0;
last = n - 1;
while(first <= last){
mid = (first + last)/2;
if ( arr[mid] == search_val){
	found = true;
	loc = mid;
	break;
	}

else if(arr[mid] < search_val){
	first = mid + 1;
	}
	
else{
	last = mid - 1;
	}
}			

if(found == true){
cout<<"\n Element found at index "<<loc<<"\n Search is successful";
}

else{
cout<<"\n Element not found "<<"\n Search is unsuccessful";
}

return 0;
} 	
