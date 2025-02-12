#include<iostream>
using namespace std;

/*-----------------------------------Insert element--------------------------------------------------------*/
void Insert(int arr[], int n)
{
int i, element, position;
cout<<"Enter the element : ";
cin>>element;
cout<<"Enter position : ";
cin>>position;

for (i=n-1; i >= position; i--)
{
  arr[i+1]=arr[i];
}

arr[position]=element;

cout<<"The new array is: [ ";

for (i=0; i<n+1; i++)
{
cout<<arr[i]<<" ";
}

cout<<"]"<<endl;

}

/*-----------------------------------Delete element--------------------------------------------------------*/
void Delete(int arr[], int n)
{
int position, i;
cout<<"Enter position : ";
cin>>position;

for (i=position; i<n; i++)
{
    arr[i]=arr[i+1];    
}

cout<<"The new array is: [ ";

for (i=0; i<n-1; i++)
{
cout<<arr[i]<<" ";
}

cout<<"]"<<endl;

}

/*-----------------------------------Reverse display-------------------------------------------------------*/
void ReverseDisplay(int arr[], int n)
{
cout<<"The reversed display of elements is : [";
for (int i=0; i<n; i++)
{
cout<<arr[n-1-i]<<" ";
}

cout<<"]"<<endl;

}

/*-----------------------------------Reverse elements------------------------------------------------------*/
void Reverse(int arr[], int n)
{
int i = 0;
int j = n-1;
int temp;
while (i<j)
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++,j--;
}

 
cout << "The reversed array elements are: [ ";

for (int i=0; i<n; i++)
{
cout<<arr[i]<<" ";
}

cout<<"]"<<endl;
   
}

/*-----------------------------------Find duplicates-------------------------------------------------------*/
int Duplicates(int arr[],int n)
{
for (int i=0; i<n; i++)
{
	for(int j=i+1; j<n; j++)
	{
		if (arr[i]==arr[j])
		return arr[i];
	}
	return -1;
}

}

/*-----------------------------------Swap elements---------------------------------------------------------*/
void Swap(int arr[],int n)
{
int i1, i2, temp;
cout<<"Enter the index of first element : ";
cin>>i1;
cout<<"Enter the index of second element : ";
cin>>i2;

temp = arr[i1]; 
arr[i1] = arr[i2];
arr[i2] = temp;

cout<<"Array after swapping elements is : [";

for (int i=0; i<n; i++)
{
	cout<<arr[i]<<" ";
}

cout<<"]"<<endl;

}

/*-----------------------------------Average of elements---------------------------------------------------*/
int Average(int arr[], int n)
{
int sum = 0;
for(int i=0; i<n; i++)
{
    sum=sum+arr[i];
}

int avg = sum/ n;
return avg;
}

/*-----------------------------------Minimum---------------------------------------------------------------*/
void Minimum(int a[], int n)
{
int min = a[0];
for (int i=0; i<n; i++)
{
	if (a[i] < min)
	min = a[i];	
}
cout<<"The minimum element is : "<<min<<endl;

}

/*-----------------------------------Maximum---------------------------------------------------------------*/
void Maximum(int a[], int n)
{
int max = a[0];
for (int i=0; i<n; i++)
{
	if (a[i] > max)
	max = a[i];
}
cout<<"The maximum element is : "<<max<<endl;

}

/*-----------------------------------Driver code-----------------------------------------------------------*/
int main()
{
int i, n;

cout<<"Enter the size of array : ";
cin>>n;
int arr[n];

for (i=0; i<n; i++)
{
cout<<"Enter array element: ";
cin>>arr[i];
}

cout<<"The array elements are: [ ";

for(i=0; i<n; i++)
{
cout<<arr[i]<<" ";
}

cout<<"]"<<endl;

int choice;
while (1)
{
cout<<"----------------------------"<<endl;
cout<<"PROGRAM FOR ARRAY OPERATIONS"<<endl;
cout<<"----------------------------"<<endl;
cout<<"1. Insert an element"<<endl;
cout<<"2. Delete an element"<<endl;
cout<<"3. Reverse display"<<endl;
cout<<"4. Reverse the array elements"<<endl;
cout<<"5. Find out duplicates in array"<<endl;
cout<<"6. Swap the array elements"<<endl;
cout<<"7. Number of elements in the array"<<endl;
cout<<"8. Average of array elements"<<endl;
cout<<"9. Find minimum element"<<endl;
cout<<"10.Find maximum element"<<endl;
cout<<"11.Exit"<<endl;
cout<<endl;
cout<<"Enter your choice: ";

cin>>choice;


switch (choice)
{

case 1:
Insert(arr, n);
break;

case 2:
Delete(arr,n);
break;

case 3:
ReverseDisplay(arr,n);
break;

case 4:
Reverse (arr,n);
break;

case 5:
int dup;
dup = Duplicates(arr,n);
dup == -1 ? cout<<"No duplicates found!"<<endl : cout<<"The duplicate in array is : "<<dup<<endl;
break;

case 6:
Swap(arr,n);
break;

case 7:
n=sizeof(arr)/sizeof(arr[0]);
cout<<"Currant array size is :"<<n<<" elements"<<endl;
break;

case 8:
int avg;
avg = Average(arr,n);
cout<<"The average of all elements is : "<<avg<<endl;
break;

case 9:
Minimum(arr,n);
break;

case 10:
Maximum(arr,n);
break;

case 11:
exit (0);
break;

default:
cout<<"Invalid choice"<<endl;
cout<<endl;
break;

}

}

return 0;

}



