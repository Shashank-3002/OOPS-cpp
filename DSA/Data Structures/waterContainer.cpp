#include<iostream>
using namespace std;

int waterContainer(int arr[], int height){
    int maxwater = 0;
    for(int i =0; i<height.size(); i++){
        for(int j=i+1;j<height.size();j++){
            int width = j-i;
            int ht = min(height[i],height[j]);
            int currwater = width*ht;

            maxwater = max(maxwater, currwater);
        }
    }
    return maxwater;
};

int main(){
    int arr = [10,7,3,5,12,6,8];
    int height = arr[i];
    waterContainer(arr,height);
    cout<< "The maximum water container: " << waterContainer<<endl;
    return 0;
}
