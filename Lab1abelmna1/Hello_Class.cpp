#include <iostream>
#include <stdlib.h>
#include "Hello_Class.h"

using namespace std;



    
      Hello_Class::Hello_Class(int i) {
         if (i == 0) {
        output_string = "Hello C++ Data Structures, from Adam Belmnahia!!";
         } else {
            output_string = "Hello Data Structures!";
         }
      }

      void Hello_Class:: print_hello(){
         cout << output_string << endl;
      }
      
