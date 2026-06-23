#include<iostream>
using namespace std;
int main(){
int arr[6] = {3 , 435 , 87, 90, 67 , 00 };
int n = 6;
int loc ;
int search_val;
bool found = false;

cout<<"\n Elements of an array is : \n ";
for (int i = 0; i < n ; i++){
cout<<arr[i]<<"\t";
}

cout<<"\n Enter the element you want to search in an array : ";
cin>>search_val;

for (int i = 0; i < n; i++){
	if(search_val == arr[i]){
	found = true;
	loc = i;
	break;
	}
}

if (found == true){	
cout<<"\n Element found at index "<<loc<<"\n Search is successful ! \n";
}

else{
cout<<"\n Element is not found ... "<<"\n Search is unsuccessful ! ";
}
return 0;
}

	 
