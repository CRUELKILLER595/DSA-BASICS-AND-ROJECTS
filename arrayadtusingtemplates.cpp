#include<iostream>
#include<algorithm>
using namespace std;
template<class T>
class ARRAYADT{
int size;
int capacity;
T*arr;
public:
ARRAYADT(int cap){
    capacity=cap;
    size;
    arr=new T[capacity];
}
void insert(in index,T value){
    if(index<=0||index>capacity){
        cout<<"Invalid index"<<endl;
        return;
    }
    arr[index]=value;
}
void insert(T value){
    if(size==capacity){
        cout<<"Array is full"<<endl;
        return;
    }
    arr[size]=value;
    size++;
}
void removeAt(int index){
    if(index<0||index>size){
        cout<<" INVALID INDEX "<<endl;
        return;
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
void display(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }

}
void sortAscending(){
    sort (arr,arr+size);
}
void sortDescending(){
    sort(arr,arr+size,greater<T>());
}
int BinarySearch(T key){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=high+low/2;
        if(arr[mid]==key){
            return mid
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
~ARRAYADT(){
    delete[]arr;
}

};