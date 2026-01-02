#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item cur_item, new_item;

    if (std::cin >> cur_item)    
        {
            int cnt = 1;
            while (std::cin >> new_item)
            {
                if (new_item.isbn() == cur_item.isbn())
                {
                    ++cnt;
                }
                else
                {
                    std::cout << cur_item.isbn() << " occurs " << cnt << " times" << std::endl;
                    cur_item = new_item;
                    cnt = 1;
                }
            }

            std::cout << cur_item.isbn() << " occurs " << cnt << " times" << std::endl;
        }
        return 0;
    
}