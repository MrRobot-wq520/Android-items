#include <QWidget>
#include <QApplication>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

using namespace std;

int main(int argc, char *argv[]){

    QApplication app(argc, argv);
    QWidget window;
    QLabel label("Bekleniyor...", &window);
    label.move(50, 30);

    QPushButton button1("Gonder", &window);
    button1.move(100, 100);

    QLineEdit input(&window);
    input.move(100, 60);

    QObject::connect(&button1, &QPushButton::clicked, [&](){
        label.setText(input.text());

        label.move(50, 30);
    });

    window.show();
    window.resize(300,200);

    return app.exec();

    
}
