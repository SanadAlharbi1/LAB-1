#include <iostream>
using namespace std;

int values;
bool want;
int *DArray;
int *newArr;


void create_array()
{
   DArray = new int[values];
   for (int i = 0; i < values; i++) {
       cout << "Enter Value: ";
       cin >> DArray[i];
   }

   cout << "want print the array ? 0 OR 1 :";
   cin>> want ;

   if (want == 1) {
       for (int i = 0 ; i < values; i++) {
           cout << DArray[i] <<endl;
       }
   }


}
void resize()
{




   int new_value;
   cout << "Enter new size :"<<endl;
   cin >> new_value;
   newArr = new int[new_value];
   for (int i = 0; i < new_value; i++) {
       cout << "Enter Value: ";
       cin >> newArr[i];
   }
   if (want == 1) {
       for (int i = 0 ; i < values + new_value; i++) {
           cout <<DArray[i]<<" ";
           cout <<newArr[i]<<" ";
       }

       
       
   }

}


int main()

{
   cout <<"How many integer you want ?"<<endl;
   cin >> values;
   create_array();
   resize();
}
//abdulelah helped me
