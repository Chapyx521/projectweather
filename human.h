#ifndef HUMAN_H
#define HUMAN_H
#include <QString>

class Human
{
public:
    Human(const QString gender);
    void showAdvice(double temperature) const;
private:
    QString m_gender;
};
#endif // HUMAN_H
