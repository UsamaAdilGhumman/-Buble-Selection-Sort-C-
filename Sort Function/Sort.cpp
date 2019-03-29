#include <iostream>
#include<stdlib.h>
using namespace std;
void SortMenu()
{
    cout<<"\t\tSort Program"<<endl;
    cout<<"1. Bubble Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
}
void inputArray(int a[],int size)
{
    cout<<"Enter the Data in Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i+1<<" ";
        cin>>a[i];
    }
}
void outputSort(int a[],int size)
{
    cout<"Your Sorted Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nThanks! ";
}
void bubbleSort(int a[],int &size)
{
    for(int i=1;i<size;i++)
    {
        //outer loop bas sort ki passes ko control krra ga
        //is ma hamsha i=1 and i<size how ga
    for(int j=0;j<size-1;j++)
    {
        //ya sort krra ga elements ko or agar 4 size ha to 0 1 2 3 tak gy ga
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=a[j];
        }
    }

    }

}
void selectionSort(int a[],int &size)
{
    int min,temp,loc;
    for(int i=0;i<size-1;i++)
    {
        min=a[i];
        loc=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    outputSort(a,size);
}
void mergeSort(int a[],int b[],int size1,int size2)
{
    int i,j,k; j=k=0;
    int size=size1+size2;
    int array[size];
    for(i=0;i<size;i++)
    {
        if(a[i]<b[j])
        {
            array[i]=a[i];
        }
        else
        {
            array[i]=b[j];
            j++;
        }
    }
    outputSort(array,size);
}
int main()
{
    while(true)
    {
        cout<<"\n";
    SortMenu();
    int choice;
    cout<<"Please Enter your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            int size;
            cout<<"Enter the size of the array : ";
            cin>>size;
            int Bubble[size];
            inputArray(Bubble,size);
            bubbleSort(Bubble,size);
            break;
        }
    case 2:
        {
            int size;
            cout<<"Enter the size of the array : ";
            cin>>size;
            int Selection[size];
            inputArray(Selection,size);
            selectionSort(Selection,size);
            break;
        }
    }
     }
    return 0;
}
