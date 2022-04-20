#include "qtwrapercside.h"
#include "iostream"
#include "window.h"
#include <QWindow>
using namespace std;
QWidget *QTWraperCSide::w;
char* createHello(){
    char *c=new char[64];
    memcpy(c,"createHello",12);
    return c;
}

QApplication * createApp(){
    char *argv[]={"aa"};
    int argc=1;
    QApplication *app=new QApplication( argc, argv );

    QSurfaceFormat fmt;
    fmt.setSamples(4);
    QSurfaceFormat::setDefaultFormat(fmt);
    Window window;
    window.show();
    app->exec();
    return app;
    QObject * bar = new QObject();
    QTWraperCSide::w=new QWidget(  nullptr );
       QTWraperCSide::w->resize( 100, 30 );

       //a.setMainWidget( &hello );
       QTWraperCSide::w->show();


    cout<<app<<endl;
    //QCoreApplication::instance()->exec();
   return app;










}

QPushButton * createBtn(QApplication *app,char s[],void (*foo)() ){

    cout<<app<<endl;
    cout<<QCoreApplication::instance()<<endl;

    QPushButton *hello=new QPushButton( s, QTWraperCSide::w );
       hello->resize( 100, 30 );

       //a.setMainWidget( &hello );
       hello->show();
   foo();
   QObject::connect(hello, &QPushButton::clicked, [foo]()
    {
        foo();
    });

   return hello;


}
extern void runApp(QApplication *app){
    cout<<app<<endl;
    cout<<QCoreApplication::instance()<<endl;
    QCoreApplication::instance()->exec();
    cout<<app<<endl;
   //app->exec();
}
QTWraperCSide::QTWraperCSide()
{
}
