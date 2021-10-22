//Array Implementation in c , with functionalities such Display the array, Insert into the Array and Delete from the Array.
#include<stdio.h>
#include<conio.h>

void DISPLAY(int *arr,int n)      //Display function to Display the current elemnets in the Array.
{
    for(int i=0;i<n;i++)
      printf("%d ",arr[i]);
    printf("\n");
}

void INSERT(int *arr,int n)   //Insert function to insert an element anywhere in the array.
{
    int item,index;
    printf("Random Insertion \n");
    printf("Enter the item to Insert:-");
    scanf("%d",&item);
    printf("Enter the Index number to insert(between 0-%d)",n-1);
    scanf("%d",&index);

    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=item;
}

void DELETE(int *arr,int n)   //Delete function to Delete any element from the array.
{
    int index;
    printf("Enter the index position to delete(between 0-%d):-",n-1);
    scanf("%d",&index);
    for(int i=index;i<n;i++)
       arr[i]=arr[i+1];
}


int main()
{
    int n;
    printf("Enter the size of the array:-");
    scanf("%d",&n);
    int arr[n+1];      

    for(int i=0;i<n;i++)             //initializing the array
    {
        printf("Enter %d Element of the array:-",i+1);
           scanf("%d",&arr[i]);
    }
    INSERT(arr,n);               //calling INSERT function
    DISPLAY(arr,n);              //calling DISPLAY function

    DELETE(arr,n);               //calling DELETE function
    DISPLAY(arr,n);              //calling DISPLAY function
}
