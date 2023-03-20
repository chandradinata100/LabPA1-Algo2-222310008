#include <iostream>
using namespace std;

int const banyak = 10;                               
 
void swap(int &e, int &f)
{
    int j;
    j = e;
    e = f;
    f = j;
}
void PrintArray(int* array, int n)
{
    int i;

    for( i = 0; i < n; i++) cout<<array[i]<<',';
}

int SplitArray(int* array, int pivot, int start, int end)
{
    int bataskiri = start;
    int bataskanan = end;
    while(bataskiri < bataskanan)            
    {
         while( pivot < array[bataskanan]          
                && bataskanan > bataskiri)      
         {
              bataskanan--;                      
         }
         swap(array[bataskiri], array[bataskanan]);
         while( pivot >= array[bataskiri]          
                && bataskiri < bataskanan)     
         {
              bataskiri++;                        
         }
         swap(array[bataskanan], array[bataskiri]);
    }
    return bataskiri;                              
}
void QuickSort(int* array, int start, int end)
{
    int pivot = array[start];                  
    int splitPoint;
    if(end > start)                        
    {
        splitPoint = SplitArray(array, pivot, start, end);
        array[splitPoint] = pivot;
        QuickSort(array, start, splitPoint-1);  
        QuickSort(array, splitPoint+1, end);    
    }
}
int main()
{
    int array[banyak];
    cout << "Program untuk mengurutkan data menggunakan cara rekursif " << endl;
    for(int i = 0; i < banyak; i++)
    {
         cout<<"Masukkan bilangan yang ingin diinput: ";
         cin>>array[i];
    }
    cout<<endl<<"Bilangan yang di input sebelumnya : "<<endl;
    PrintArray(array, banyak);
    QuickSort(array,0,banyak - 1);
    cout<<endl<<"Bilangan setelah diurutkan menjadi : "<<endl;
    PrintArray(array,banyak);
    cin.sync();
    cin.get();
}