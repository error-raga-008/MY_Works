#include <iostream>
using namespace std;

class array{
        private:
        int a[10][10],b[10][10],r,c;

        public:
        void in(){
            cout<<"Enter R and C: ";
            cin>>r>>c;

            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {

                    cout<<"Enter Num: ";
                    cin>>a[i][j];
                }
            }

            cout<<"Enter for array b: ";
            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {

                    cout<<"Enter Num: ";
                    cin>>b[i][j];
                }
            }
        }

        void out(){

            for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {
                    cout<<a[i][j]+b[i][j]<<" ";
                    //cout<<a[i]<<" "<<a[j];
                }
                cout<<endl;
            }
        }
};

int main(){

    array o;
    o.in();
    o.out();

};