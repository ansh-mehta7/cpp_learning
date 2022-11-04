// templates in c ++
 // class ko ek bar banege or alag alag data  typeske lie classes alag alag ban jaegi  
 //templates are also called as parameterised classes 
 //do not repeat principle  and we can do generic programming 
 // template <class t > t can be int float char etc  
 //many classes can be constructed with the help of template classes 
 #include <iostream >
  using namespace std ;
  template <class T>

   class vector {
    public:
// dat types ki jagah t ka use kar rhe hain hum 
        T *arr ;
        int size ;
         public :
          vector (int m  )
          {size  = m ;
           
              arr = new T [size ];
              
          }
          T dotproduct (vector &v ){
              T d =0 ;
               for (int i =0 ; i<size ; i++){
                   d= d+  this ->arr[i]* v.arr[i];

               }
                return d ;
                 
          }
   };
    int main (){
         vector <float >v1(3);
          v1.arr[0]= 2.88;
          v1.arr[1]= 3.88 ;
          v1.arr[2]= 5.88;
          vector<float > v2(3);
           v2.arr[0]= 1.54;
           v2.arr[1]= 5.54;
           v2.arr[2]= 8.54;
            float  a = v1.dotproduct(v2);
            // float  b = v1.dotproduct(v2);
             cout<<a;
            //  cout<<b;
              

             return 0 ;
              
           
    }
    // but in case of other data types how we can use wihout making diffrent classes  
     // we can use the templates 