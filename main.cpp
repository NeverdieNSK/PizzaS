#include <QCoreApplication>
#include "pizza.h"
#include "pizzastore.h"
#include "cheesepizza.h"
#include "carbonara.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

 //   Pizza *pizza1 = pStore->orderPizza("CheesePizza");
    return a.exec();
}



