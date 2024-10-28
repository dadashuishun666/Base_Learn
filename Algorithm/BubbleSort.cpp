#include <iostream>
#include <string>
#include <memory>
#include <vector>

#define LOG(x) std::cout << x << std::endl
/*
学习内容：C++冒泡排序
*/

void BubbleSort(std::vector<int> &v)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int count = 0; // 记录数据交换的次数
        for (int j = 0; j < size - 1 - i; j++)
        {
            int tmp;
            if (v[j + 1] < v[j])
            {
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                count++;
            }
        }

        if (count == 0)
            break; // 如果有一轮没有数据交换，直接退出
    }
}

int main()
{
    std::vector<int> array = {7, 6, 5, 4, 3, 2, 1};
    BubbleSort(array);
    for (int v : array)
        LOG(v);
}