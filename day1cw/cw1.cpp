// You are using GCC
#include<iostream>
using namespace std;

/*int binary(int arr[],int low,int high,int key)

start=0;
end=length;

    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        return binary(arr,low,mid-1,key);
        else if(arr[mid]<key)
        return binary(arr,mid+1,high,key);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    sort(arr,arr+n);
    int result=binary(arr,0,(arr.length)-1,key);
    if(result>=0){
        cout<<"key found";
    }
    else{
        cout<<"key not found";
    }
}*/

bool bs(int a[],int k,int l,int r){
    if(l>r){
        return false;
    }
    int m=(l+r)/2;
    if(a[m]==k){
        return true;
    }
    else if(a[m]>k){
        return bs(a,k,l,m-1);
    }
    else{
        return bs(a,k,m+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a,a+n);
    if(bs(a,k,0,n-1)){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
}
