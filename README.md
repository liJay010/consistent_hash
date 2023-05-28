# 基于跳表实现的一致性哈希算法



[跳表源码实现转自此](https://github.com/youngyangyang04/Skiplist-CPP)

一致性哈希环使用跳表实现。使用getMurMurHash实现字符串到哈希值的转换。可随机创建任意虚拟节点。添加和删除实际节点时虚拟节点会自动转换到其他节点。

```cpp
//添加真实节点 -- 第一个节点为节点名字，第二个参数为虚拟节点个数
void add_real_node(string ip, unsigned int num);

//删除真实节点
void consistent_hash::drop_real_node(string ip);
    
//打印所有节点
void print();

//匹配节点，通过输入字符来匹配对应的服务节点
string search_by_name(string name)
    
```

