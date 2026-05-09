#include <QObject>
#include <QLabel>
#include <QApplication>
#include <QPushButton>
#include <QWidget>

using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QWidget window;

    QLabel label("", &window);
    label.move(30, 20);

    QPushButton button1("Mutlu", &window);
    button1.move(140, 100);

    QPushButton button2("Uzgun", &window);
    button2.move(140, 70);

    QPushButton button3("Uykulu", &window);
    button3.move(140, 40);

    QObject::connect(&button1, &QPushButton::clicked, [&](){
        label.setText("Mutluyum.");
        label.adjustSize();
    });

    QObject::connect(&button2, &QPushButton::clicked, [&](){
        label.setText("Uzgunum.");
        label.adjustSize();
    });

    QObject::connect(&button3, &QPushButton::clicked, [&](){
        label.setText("Uykuluyum.");
        label.adjustSize();
    });

    window.setWindowTitle("Ruh hali");
    window.resize(300, 200);
    window.show();

    return app.exec();
}