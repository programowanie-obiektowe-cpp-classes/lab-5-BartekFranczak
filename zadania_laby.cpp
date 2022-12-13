#include <vector>
#include <list>
#include <iostream>
#include "Human.hpp"



int main(){
     
    /*//WEKTOR
    std::vector<Human> vs;
    
    
    Human H("Duplak",12,true,true);
    
    for (int i =0; i<4; i++){
        
        vs.emplace_back("Duplaki",12,true,true);
    }
    //std::cout<< lista[lista.end()]<<std::endl;
    for (std::vector<Human>::iterator it = vs.begin(); it!=vs.end(); it++)
    {
    std::cout << it -> getName() << std::endl;
    
    }
    */

    // LISTA
    std::list<int> lista;
    
    lista.emplace(lista.begin(),10);
    lista.emplace(lista.end(),15);
    lista.emplace(lista.begin(),1);
    lista.emplace(lista.begin(),2);
    lista.emplace(lista.begin(),3);
    /*
    std::cout<< lista.front()<<std::endl;
    std::cout<< lista.back()<<std::endl;
    std::cout<< &lista.front()<<std::endl;
    std::cout<< &lista.back()<<std::endl;
    lista.emplace(lista.begin(),1);
    lista.emplace(lista.begin(),2);
    lista.emplace(lista.begin(),3);
    std::cout<< &lista.back()<<std::endl;
    */
    for (std::list<int>::iterator it = lista.begin(); it!=lista.end(); it++)
    {
    std::cout << *it << std::endl;
    
    }
    for (std::list<int>::const_reverse_iterator it = lista.crbegin(); it!=lista.crend(); it++)
    {
    std::cout << *it << std::endl;
    
    }
    //ZAD 17
    
    for (const int& e : lista)
        std::cout << e << std::endl;


    /*PRZYKŁAD ITERATORA
    std::vector<int>           v{1, 2, 3};
    std::vector<int>::iterator it = v.begin();

    // Jawnie drukujemy zawartość wektora
    std::cout << *it++;
    std::cout << *it++;
    std::cout << *it;
    */
    /*//PRZYKŁAD UZYCIA auto
    std::vector<int> v{1, 2, 3};
    for (auto it = v.crbegin(); it != v.crend(); ++it)
        std::cout << *it;
    
    auto t =1;
    t+=5;
    std::cout<<t;
    */
    // PRZYKŁAD Ranged Base Loop
    /*
    //wykonujemy kopie każdego elementu v
    std::vector<int> v{1, 2, 3};
    for(int e : v)
        std::cout << e;
    //bez kopii każdego elementu v
    for(const int& e : v)
        std::cout << e; 
    
    return 0;
    */


}