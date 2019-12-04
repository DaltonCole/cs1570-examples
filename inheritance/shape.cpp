#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

class Square: public Shape {
    public:
        void setWidth(int w) {
            width = w;
            height = w;
        }

        void setHeight(int h) {
            width = h;
            height = h;
        }

        int getArea() {
            return width * height;
        }
};

int main(void) {
   Rectangle Rect;
   Square Squr;

   Rect.setWidth(5);
   Rect.setHeight(7);

   Squr.setWidth(3);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout << "Square area: " << Squr.getArea() << endl;

   return 0;
}
