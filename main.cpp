#include <iostream>

using namespace std;

struct pointer
{
    int data;
    pointer     *left = NULL,
                *right = NULL;
};

pointer* add(pointer* start, int data, bool side)
{
    pointer *temp = new pointer;
    temp->data = data;
    if (side)
    {
        start->left = temp;
    }
    else
    {
        start->right = temp;
    }
    
    cout << "added " << temp << '\n' << "to " << start << '\n';
    return temp;
}

void print(pointer* start)
{
    //MySQL SQL 
    if (!start)
        return;
    cout << start->data << ", ";
    print(start->left);
    print(start->right);
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


pointer *temp, *start;

int main()
{
    start = new pointer;
    start->data = -1;
    temp = start;
    cout << "added " << start << '\n';
    for (size_t i = 0; i < 20; i++)
    {
        // temp = add((((i + 1) % 2 )? temp : start), i, i % 2);
        temp = add(temp, i, i % 2);
    }
    print(start);
}