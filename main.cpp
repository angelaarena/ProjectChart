#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}



/* ------------------------------------------------------------------------------------
 * Modello
 *
 * class dati (titolo, descrizione, vector<QPoint> ogni punto ha x e y, name x, name y)
 *  contiene gli attributi necessari per costruire il chart
 *  x = unsigned int anno
 *  y = persone
 *  opportuni controlli: 2009<x<2022 , 0<y<200000
 * (creare dello spazio dall'origine e l'altezza)
 *
 *
 *
 * class chart (astratta)
 *  QPoint origine;
 *  Dati (deve prelevare i dati per costruire il chart)
 *
 *  class chart1, chart2, chart3, chart4, chart5
 *
 * ----------------------------------------------------------------------------
 * View
 *
 * class errori
 *
 * class mainWindow ( dati | chart )
 *  inizialmente: (1)
 *      dati vuoto x,y
 *  dopo una new:
 *      dati con name x e name y e celle da inserire i dati
 *  dopo un open file:
 *      dati con name x e name y, le celle già riempite, ma modificabili
 *
 *
 * class dataInsert
 *  serve per i dati x e y
 *  (1) viene costruito solo con l'header : x,y
 *  tabella dinamica (+ o -)
 *
 * class showChart
 *  theme
 *  legenda
 *  titolo
 *  descrizione
 *  ...
 *
 * class QtChart
 *  contiene il chart
 *
 *
 * class newWindow (creare dei nuovi dati)
 *  Numero di dati
 *  Chart
 *  Titolo
 *  Descrizione
 *  x (stringa)
 *  y (stringa)
 *  ok / annulla
 *
 *
 *
 * ----------------------------------------------------------------------
 * Controller
 *
 * class Controller
 *  connetere tutti gli eventi
 *      slots + signals
 *
 *
 * -----------------------------------------------------------------
 */
