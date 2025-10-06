#include<iostream>
#include<algorithm>
using namespace std;
class ArrayADT
{
    int *array;
    int size;
    int capacity;
    public:
    ArrayADT(int cap){
        capacity=cap;
        array=new int[capacity];
        size=0;
        cout<<"you have created an array of capacity"<<capacity<<endl;
    }
void  insert(int value){
    if(size>capacity){
        cout<<" array is full"<<endl;
        return;
    }
    array[size++]=value;
    cout<<"value inserted"<<endl;
}
void insert(int value,int index){
    if(index<=0||index>size){
        cout<<" INVALID INDEX "<<endl;
        return;
    }
    array[index]=value;
    cout<<"value inserted at index "<<index<<endl;
}
void SortAScending(){
    sort(array,array+size);
    cout<<"array sorted in ascending order"<<endl;
}
void print(){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

}
void Delete(int index){
    if(index<0||index>size){
        cout<<" INVALID INDEX "<<endl;
        return;
    }
    for(int i=index;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
    cout<<"value deleted at index "<<index<<endl;
}
void linearSearch(int value){
    for(int i=0;i<size;i++){
        if(array[i]==value){
            cout<<"value found at index "<<i<<endl;
            return;
        }
    }
    cout<<"value not found"<<endl;
}
void binarySearch(int value){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(array[mid]==value){
            cout<<"value found at index"<<mid<<endl;
            return;
        }
        else if(array[mid]<value){
            low=mid+1;

        }else{
            high=mid-1;
        }
    }
    cout<<"value not found"<<endl;
}
};
int main(){
    ArrayADT arr(5);
    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);
    arr.insert(50);
    arr.print();
    arr.SortAScending();
    arr.print();
    arr.insert(25,2);
    arr.Delete(3);
    arr.print();
    return 0;
}