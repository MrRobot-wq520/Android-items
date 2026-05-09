#include <QObject>
#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

using namespace std;

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    QWidget window;
    QLabel label("Deneme yazi", &window);
    QVBoxLayout *layout = new QVBoxLayout();
    QLineEdit input;
    QPushButton button("Gonder");

    layout->addWidget(&button);
    layout->addWidget(&label);
    layout->addWidget(&input);


    QObject::connect(&button, &QPushButton::clicked, [&](){
        if(pass)
    });

    window.show();

    return app.exec();
}