#include <QLabel>
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QObject>
using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QWidget window;
    QLabel label("Bos", &window);
    label.setText("Deneme");
    QPushButton button1 ("bas", &window);
    QPushButton button2 ("bas2", &window);
    QObject::connect(&button1, &QPushButton::clicked, [&](){
        label.setText("Basildi");
    });
    QObject::connect(&button2, &QPushButton::clicked, [&](){
        label.setText("Basildi 2.tusa");
    });
    button1.move (50, 80);
    button2.move (80, 110);
    window.show();
    window.resize(180, 170);

    return app.exec();
}    