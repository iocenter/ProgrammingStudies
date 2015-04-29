#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <stdio.h>
#include <algorithm> // STL algorithms
#include <array>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* ----------------------------
     *  */


    /* ----------------------------
     * STL ALGORITHMS [ch32:p927] */

    string chapter_name = "STL ALGORITHMS [ch32:p927]";
    string chapter_uline(chapter_name.size(),'=');
    cout<<chapter_name<<'\n';
    cout<<chapter_uline<<'\n';

    /* -----------------------
     * SET ALGORITHMS [p947] */
    string section_name = "SET ALGORITHMS [p947]";
    string section_uline(section_name.size(),'-');
    cout<<section_name<<'\n';
    cout<<section_uline<<'\n';

    vector<string> set_array = {
        "param1",
        "param2" };

    for (int i = 0; i<set_array.size(); ++i)
        cout<<i<<" - "<<set_array[i]<<'\n';


    /* ------------------
     * POINTERS [p179] */

    qDebug()<<"POINTERS [p179]";

    int v[] = {1, 2, 3, 4};
    qDebug()<<v;

    int *p1 = v; // pointer to intial element (implicit conversion)
    qDebug()<<p1;

//    qDebug()<<v[];
    qDebug()<<sizeof v; // bitsize
    qDebug()<<sizeof p1;

    int i;
    for (i=0; i!=4; ++i) {
        cout << v[i] <<'\n';
    }



    /* --------- */

//    return a.exec();
    return 0;

//    int status = 0;
//    void exit(0);


}
