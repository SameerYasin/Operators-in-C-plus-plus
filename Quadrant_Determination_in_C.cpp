// SAMEER YASIN
// 24070124092
// ENTC B1

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"Enter the value of y: "<<endl;
    cin>>y;

    if(x>0 && y>0){
        cout<<"POINT LIES IN THE FIRST QUADRANT "<<endl;
    }else if(x<0 && y>0){
        cout<<"POINT LIES IN THE SECOND QUADRANT "<<endl;
    }else if(x<0 && y<0){
        cout<<"POINT LIES IN THE THIRD QUADRANT "<<endl;
    }else if(x>0 && y<0){
        cout<<"POINT LIES IN THE FOURTH QUADRANT "<<endl;
    }else if(x!=0 && y==0){
        cout<<"POINT LIES ON THE X-AXIS"<<endl;
    }else if(x==0 && y!=0){
        cout<<"POINT LIES ON THE Y-AXIS"<<endl;
    }else if(x==0 && y==0){
        cout<<"POINT LIES AT THE ORIGIN"<<endl;
    }

    return 0;
}

/*
Enter the value of x: 
5
Enter the value of y: 
10
POINT LIES IN THE FIRST QUADRANT

Enter the value of x: 
-4
Enter the value of y: 
6
POINT LIES IN THE SECOND QUADRANT

Enter the value of x: 
-3
Enter the value of y: 
-7
POINT LIES IN THE THIRD QUADRANT

Enter the value of x: 
8
Enter the value of y: 
-9
POINT LIES IN THE FOURTH QUADRANT
*/
