#include<iostream>
using namespace std;
int main(){
int s1 = 5;
int s2 = 7;
int arr1[s1] = {1 , 3, 5, 7, 9};
int arr2[s2] = {2 , 4, 8, 10, 11, 12, 16};
int s3 = s1 + s2;
int res[s3];

int i = 0 ;
int j = 0;
int k = 0;
while(i < s1 && j < s2){
	if(arr1[i] < arr2[j]){
	res[k] = arr1[i];
	i++;
	k++;
	}
	
	else{
	res[k] = arr2[j];
	j++;
	k++;
	}
}

while(i < s1){
res[k++] = arr1[i++];
}
	 
while(j < s2){
res[k++] = arr2[j++];
}
cout<<"\n Array 1 is : ";
for(int i = 0; i < s1 ; i++){
cout<<arr1[i]<<" ";
}

cout<<"\n Array 2 is : ";
for(int j = 0; j < s2; j++){
cout<<arr2[j]<<" ";
}

cout<<"\n Merged Array is : ";
for(int k = 0; k < s3; k++){
cout<<res[k]<<" ";
}

return 0;
}

