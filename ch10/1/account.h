/**
 * 定义一个类来标识银行账户，
 * 数据成员包括
 *  储户姓名，
 *  账号(使用字符串)
 *  存款
 * 成员类型执行如下操作:
 *  创建一个对象对其初始化
 *  显示储户姓名，账号和存款
 *  存入参数指定的存款
 *  取出参数指定的存款
*/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
using std::string;

class Account
{
private:
    std::string name_;
    std::string accountId_;
    unsigned balance_;

public:
    Account();
    Account(string name,string accountId,unsigned balance);
    ~Account();
    void showName() const;
    void showAccountId() const;
    void showBalance() const;
    void incDeposit(unsigned amount);
    void decDeposit(unsigned amount);
};

#endif