#include <QPushButton>
#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include <QWidget>
#include <QVBoxLayout>
#include <QObject>
#include <QString>
using namespace std;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QWidget window;

    QLabel label("Login sistemi", &window);
    QLineEdit input1;
    input1.setPlaceholderText("Kullanici adi:");
    QLineEdit input2;
    input2.setEchoMode(QLineEdit::Password);
    input2.setPlaceholderText("Sifre:");
    QPushButton button("Giris", &window);


    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(&label);
    layout->addWidget(&input1);
    layout->addWidget(&input2);
    layout->addWidget(&button);

    window.setLayout(layout);

    QObject::connect(&button, &QPushButton::clicked, [&](){


        QString username = input1.text();
        QString password = input2.text();

        if (username == "admin" && password == "1234"){
            label.setText("Giris basarili");
        }

        else{
            label.setText("Hatali giris");
        }
    });

    window.show();
    return app.exec();

}