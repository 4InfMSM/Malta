#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

using namespace std;



void inOrder(int currentIndex,int *a){
   if(a[currentIndex] != 0) {
            inOrder(2 * currentIndex + 1,a);
            cout << a[currentIndex] <<" ";
            inOrder(2 * currentIndex + 2,a);
    }else if(a[currentIndex+1]!=0){
        cout<<a[currentIndex]<< " ";
    }
}
void postOrder(int currentIndex,int *a) {
    if(a[currentIndex] != 0){
        postOrder(2 * currentIndex + 1,a);
        postOrder(2 * currentIndex + 2,a);
        cout << a[currentIndex] << " ";
    }else if(a[currentIndex+1]!=0){
        cout<<a[currentIndex]<< " ";
    }
}
void preOrder(int currentIndex,int* a) {
    if(a[currentIndex] != 0) {
        preOrder(2 * currentIndex + 1,a);
        cout << a[currentIndex] << " " ;
        preOrder(2 * currentIndex + 2,a);
    }else if(a[currentIndex+1]!=0){
        cout<<a[currentIndex]<< " ";
    }
}

int searchElement(int x, int *a){
    int currentIndex = 0;

    while (true) {
            if (a[currentIndex] == 0) {

                    return false;

            } if (a[currentIndex] == x) {

            return true;
             }

            else if(a[currentIndex] < x) {
            currentIndex = (2 * currentIndex + 2);
        }
            else if(a[currentIndex] > x) {
            currentIndex = (2 * currentIndex + 1);
        }
            }

    }



int main () {



    int * a;
    char r;
    int x,z=0;
    a = new int[20]  {0};

 do{
        cout<<"inserire un elemento: ";
        cin>>x;
       int c=0;
       int ct=0;
       int currentIndex = 0;
   bool s=false;
    while(s!=true) {

        if(a[currentIndex] == 0){
            a[currentIndex] = x;
            z++;
            s=true;
            cout << " inserito ad indice: " << currentIndex << endl;
            break;
        }else if(a[currentIndex] <= x) {
            if(a[currentIndex] == x){
                cout << "elemento gia' presente" << endl;
                break;
            }else if(a[currentIndex-1]!=0 && a[currentIndex-2]!=0){
                        cout << " Right ";
              //  ct=currentIndex;
            currentIndex = (2 * currentIndex + 2);
           // if(currentIndex>pow(ct,2)+1){
            //    cout<<"elemento non valido"<<endl;
             //   currentIndex=c;
          //  break;
            }else{
            cout<<"elemento non valido"<<endl;
            break;
            }
           //}
        }else {
             if(a[currentIndex] == x){
                cout << "elemento gia' presente" << endl;
                break;
            }else if(a[currentIndex-1]!=0 && a[currentIndex-2]!=0){
            cout << " Left ";
             //c=currentIndex;
            currentIndex = (2 * currentIndex + 1);
           // if(currentIndex>pow(c,2)+1){
           //     cout<<"elemento non valido"<<endl;
           //     currentIndex=c;
           // break;
           // }

        }else{
            cout<<"elemento non valido"<<endl;
            break;
            }
      }
    }
    cout<<"vuoi inserire un altro elemento? (s/n)";
    cin>>r;
        }while(r=='s');
  char ris;
   cout<<z<<endl;
  for(int i=0;i<z*2;i++){
     if(a[i]!=0){
        cout<< a[i]<<" -> "<<i<<endl;

     }

    }

     do{
    int ele;
    cout<<"che elemento vuoi cercare? ";
    cin>>ele;
    if(searchElement(ele,a)==true){
        cout<<"elemento presente"<<endl;
    }else cout<<"elemento non presente"<<endl;
    cout<<"vuoi cercare un altro elemento? (s/n)";
    cin>>ris;
   }while (ris=='s');





     cout<<z<<endl;

    cout<<"INORDER"<<endl;
   // for(int i=0;i<z;i++){

        inOrder(0,a);
    //}
   cout<<endl;
   cout<<"POSTORDER"<<endl;
  //  for(int i=0;i<z;i++){

        postOrder(0,a);
  //  }
   cout<<endl;
     cout<<"PREORDER"<<endl;
   // for(int i=0;i<z;i++){

        preOrder(0,a);
  //  }

}


