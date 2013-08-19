#ifndef MAINH_H_
#define MAINH_H_
#include <iostream>
#include <string>

class character     //声明人物类，之后派生出主角类(npc类)，怪物类......
{
private:
    string          _Name;//人物名称
    int            _blood;//人物血量
    unsigned int _attackV;//人物攻击力
    unsigned int      _qV;//人物气量
public:
    character();
    virtual ~character();
};

class zhujiao : public character //从人物类派生出主角类
{
private:
    unsigned int      _Zmoney;//主角金钱
    unsigned int      _Zlevel;//主角等级
    unsigned int     _Zweapon;//主角武器
    unsigned int        _Zexp;//主角经验
    unsigned int    _Zneedexp;//主角升级所需经验
    unsigned int _ZoldattackV;
    map <string,int>    _ZbgV;//通过STL的map，写了背包物品数量
    
public:
    zhujiao(string N) : _Name(N);//构造函数
    virtual ~zhujiao();//析构函数
    
};


#endif // MAINH_H_
