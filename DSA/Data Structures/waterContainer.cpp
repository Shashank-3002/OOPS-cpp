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
}