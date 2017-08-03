#ifndef LEGEND_H
#define LEGEND_H

#include <QObject>

class Legend
{
public:
    void initiate(QString name,int HP,int ATK,int DFS,int MP);
    Legend();

    QString name; //英雄的名字
    bool isAlive; // isAlive为假时，灭国
    int HP; // 英雄的生命值
    int ATK; // 英雄的战斗力，可升级，战胜则+5，战败+1，
    int DFS; // 英雄的防御力,可升级，战胜则+5，战败-3，可以使用政策累加
    int MP; // 英雄的魔法值，可升级，战胜则+5，战败-5，使用政策-3
    //最终攻击力综合战斗力和幸福度
    virtual bool attack(Legend &);
    int round_hurt;


protected:
    double Random(double start, double end);
};

#endif // LEGEND_H
