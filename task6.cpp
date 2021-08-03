#include <iostream>

using namespace std;

struct pointer
{
    int data;
    pointer* next = NULL;
};

void add(pointer* start, int data)
{
    pointer* temp = start;
    temp = start;
    while (temp->next)
    {
        temp = temp->next;
    }
    pointer *temp2 = new pointer;
    temp->next = temp2;
    temp2->data = data;
    cout << "added " << temp2 << '\n' << "to " << temp << '\n';
}

void print(pointer* start, int len)
{
    pointer* temp = start;
    for (size_t i = 0; i < len; i++)
    {
        cout << "printed " << temp << "\t\t";
        cout << (temp->data) << '\n';
        temp = temp->next;
    }
}


void del(pointer* start, int num)
{
    //udoli
}

void del_last(pointer* start)
{
    //udoli
}

pointer* del_any();




// int** a;
pointer *temp, *start;

int main()
{
    start = new pointer;
    cout << "added " << start << '\n';
    start -> data = 10;
    add(start, 20);
    add(start, 30);
    add(start, 40);
    print(start, 4);

   //int n = 10;

    //cin >> n;
    //a = new int*[n];   
    //for (size_t i = 0; i < n; i++)
    //{
        //a[i] = new int[n];
        //for (size_t j = 0; j < n; j++)
       // {
            //a[i][j] = (i+1) * (j +1);
       // }
        
        // *(a + i) = i * 3;
        // cout << a[i] << ' '; 
    //}
    //for (size_t i = 0; i < n; i++)
    //{
        //for (size_t j = 0; j < n; j++)
        //{
            //cout << *(*(a + i) + j) << ' ';
        //}
        //cout << '\n';
    //}
    //for (size_t i = 0; i < n; i++)
//     {
//         delete[] a[i];
//    }
//     delete[] a; 
    // return 0;
}