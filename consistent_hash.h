#pragma once
#include "string"
#include "skiplist.h"
#include "unordered_map"
#include "unordered_set"
#include "vector"
#include "iostream"
using namespace std;
class virtual_node
{
public:
    string ip_name;
    virtual_node();
    virtual_node(string ip_name);
    ~virtual_node(){};
};


class consistent_hash {
public:
    unsigned int real_node_sum; // 真实节点数量
    unsigned int virtual_node_sum; //虚拟节点数量
    unordered_map<string, unordered_set<unsigned int>> real_node_map; //真实节点对应的虚拟节点的hash值
    SkipList<unsigned int, virtual_node *> *consistent_hash_list;  // 哈希环

    consistent_hash();
    ~consistent_hash(){};
    string search_by_name(string name);
    //添加真实节点 -- 第二个参数为虚拟节点个数
    void add_real_node(string ip, unsigned int virtual_node_num);
    //删除真实节点
    void drop_real_node(string ip);
    //打印所有节点
    void print();
};

