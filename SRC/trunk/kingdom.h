#ifndef KINGDOM_H
#define KINGDOM_H

#include <QString>

class kingdom {


public:
    kingdom():TTY(100),MIT(10),Happy(50),ROOT(true),DFS(0) {
    }
    bool getROOT() {
        return ROOT;
    }
    int getTTY() {
        return TTY;
    }
    virtual bool attack(kingdom &);

    QString name;
    bool ROOT; // root为假时，灭国
    int TTY; // territory 领土
    int MIT; // military 战斗力，可升级，战胜则+5，战败+1，
    int DFS; // defense 防御力,可升级，战胜则+5，战败-3，可以使用政策累加
    int Happy; // 帝国的幸福度，可升级，战胜则+5，战败-5，使用政策-3
    //最终攻击力综合战斗力和幸福度
protected:
    /*
    bool ROOT; // root为假时，灭国
    int TTY; // territory 领土
    int MIT; // military 战斗力，可升级，战胜则+5，战败+1，
    int DFS; // defense 防御力,可升级，战胜则+5，战败-3，可以使用政策累加
    int Happy; // 帝国的幸福度，可升级，战胜则+5，战败-5，使用政策-3
    //最终攻击力综合战斗力和幸福度
    */
};

#endif // KINGDOM_H
