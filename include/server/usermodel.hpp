#ifndef __USERMODEL_H__
#define __USERMODEL_H__

#include "user.hpp"

//user表的数据操作类
class UserModel
{
public:
    UserModel(){};
    //User表的增加方法
    bool insert(User &);

    //根据id查询用户信息
    User query(int id);

    //更新用户的状态信息
    bool updateState(User user);
};

#endif


