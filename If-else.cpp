#include <iostream>
using namespace std;
int main() {
    int path;
    cout<<"Enter path:"<<endl;
    cin>>path;
    if(path==1){
        cout<<"Enter next path:"<<endl;
        cin>>path;
        if(path==2){
            cout<<"Enter next path:"<<endl;
            cin>>path;
            if(path==4){
                cout<<"Destination reached"<<endl;
            }
            if(path==3){
                cout<<"Enter next path:"<<endl;
                cin>>path;
                if(path==4){
                    cout<<"Destination reached"<<endl;
                }
            }
        }
        else if(path==3){
            cout<<"Enter next path:"<<endl;
            cin>>path;
            if(path==4){
                cout<<"Destination reached"<<endl;
            }
            if(path==2){
                cout<<"Enter next path:"<<endl;
                cin>>path;
                if(path==4){
                    cout<<"Destination reached"<<endl;
                }
            }
        }else if(path==4){
            cout<<"Destination reached"<<endl;
        }
    }else{
        cout<<"Invalid Input.";
    }

    return 0;
}