#include <QCoreApplication>
#include "pizza.h"
#include "pizzastore.h"
#include "cheesepizza.h"
#include "carbonara.h"
#include "simplepizzafactory.h"
#include "pizzastore.h"
#include "cheeseburger.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PizzaStore *pStore = new SimplePizzaFactory();
    Pizza *pizza1 = pStore->orderPizza("CheesePizza");
    Pizza *pizza2 = pStore->orderPizza("Carbonara");
    Pizza *pizza3 = pStore->orderPizza("Cheeseburger");
    return a.exec();
}



