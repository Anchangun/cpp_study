//
// Created by ChangunAn on 25. 11. 20.
//

#ifndef SORT_STRATEGY_HPP
#define SORT_STRATEGY_HPP
namespace SORT {
    class SortStrategy {
    public :
            virtual void sort(std::vector<int>& data)=0;
            virtual ~SortStrategy()=default;
    };
}
#endif //SORT_STRATEGY_HPP
