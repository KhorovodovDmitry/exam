#include <QtTest>
#include "C:\Users\vertk\Downloads\untitled1\filmdb.h"

// add necessary includes here

class FuncForServer_Test : public QObject
{
    Q_OBJECT

public:
    FuncForServer_Test();
    ~FuncForServer_Test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
    void test_case5();
    void test_case6();
    void test_case7();
    void test_case8();
    void test_case9();
    void test_case10();



};

FuncForServer_Test::FuncForServer_Test()
{

}

FuncForServer_Test::~FuncForServer_Test()
{

}

void FuncForServer_Test::test_case1()
{
    FilmDB db;
    db.addFilm("beef", "food", 9, 148);
    db.addFilm("friedd eggs", "breakfast", 9, 175);
    db.addFilm("chair", "home", 8, 81);
    db.addFilm("documents", "work", 9, 152);
    db.addFilm("table", "home", 8, 100);
    std::vector<std::string> res1 = db.get_good_films_of_genre(8, "food");
    std::vector<std::string> value1 = {"beef"};
    QVERIFY2 ( res1 == value1  ,"task_1_false");
}

void FuncForServer_Test::test_case2()
{
    FilmDB db1;
    db1.addFilm("beef", "food", 9, 148);
    db1.addFilm("friedd eggs", "breakfast", 9, 175);
    db1.addFilm("chair", "home", 8, 81);
    db1.addFilm("documents", "work", 9, 152);
    db1.addFilm("table", "home", 8, 100);
    std::vector<std::string> res2 = db1.get_good_films_of_genre(7, "home");
    std::vector<std::string> value2 = {"chair", "table"};
    QVERIFY2 ( res2 == value2  ,"task_2_false");
}

void FuncForServer_Test::test_case3()
{
    FilmDB db2;
    db2.addFilm("beef", "home", 9, 148);
    db2.addFilm("friedd eggs", "breakfast", 9, 175);
    db2.addFilm("chair", "home", 8, 81);
    db2.addFilm("documents", "home", 9, 152);
    db2.addFilm("table", "home", 8, 100);
    std::vector<std::string> res3 = db2.get_films_of_genre_less_than(100, "home");
    std::vector<std::string> value3 = {"chair", "table"};
    QVERIFY2 ( res3 == value3  ,"task_3_false");
}

void FuncForServer_Test::test_case4()
{
    FilmDB db3;
    db3.addFilm("beef", "home", 9, 148);
    db3.addFilm("friedd eggs", "breakfast", 9, 175);
    db3.addFilm("chair", "home", 8, 81);
    db3.addFilm("documents", "home", 9, 152);
    db3.addFilm("table", "home", 8, 100);
    std::vector<std::string> res4 = db3.get_films_of_genre_less_than(160, "home");
    std::vector<std::string> value4 = {"beef", "chair", "documents", "table"};
    QVERIFY2 ( res4 == value4  ,"task_4_false");
}

void FuncForServer_Test::test_case5()
{
    FilmDB db4;
    db4.addFilm("beef", "home", 9, 148);
    db4.addFilm("friedd eggs", "breakfast", 9, 175);
    db4.addFilm("chair", "home", 8, 81);
    db4.addFilm("documents", "home", 9, 152);
    db4.addFilm("table", "home", 8, 100);
    std::vector<std::string> res5 = db4.get_films_of_genre_less_than(150, "home");
    std::vector<std::string> value5 = {"beef", "chair", "table"};
    QVERIFY2 ( res5 == value5  ,"task_5_false");
}
void FuncForServer_Test::test_case6()
{
    FilmDB db5;
    db5.addFilm("beef", "home", 9, 148);
    db5.addFilm("friedd eggs", "breakfast", 9, 175);
    db5.addFilm("chair", "home", 8, 81);
    db5.addFilm("documents", "home", 9, 152);
    db5.addFilm("table", "home", 8, 100);
    std::vector<std::string> res6 = db5.get_films_less_than(148);
    std::vector<std::string> value6 = {"beef", "chair", "table"};
    QVERIFY2 ( res6 == value6  ,"task_6_false");
}
void FuncForServer_Test::test_case7()
{
    FilmDB db6;
    db6.addFilm("beef", "home", 9, 148);
    db6.addFilm("friedd eggs", "breakfast", 9, 175);
    db6.addFilm("chair", "home", 8, 81);
    db6.addFilm("documents", "home", 9, 152);
    db6.addFilm("table", "home", 8, 100);
    std::vector<std::string> res7 = db6.get_films_less_than(175);
    std::vector<std::string> value7 = {"beef", "friedd eggs", "chair", "documents" "table"};
    QVERIFY2 ( res7 == value7  ,"task_7_false");
}
void FuncForServer_Test::test_case8()
{
    FilmDB db7;
    db7.addFilm("beef", "home", 9, 148);
    db7.addFilm("friedd eggs", "breakfast", 9, 175);
    db7.addFilm("chair", "home", 8, 81);
    db7.addFilm("documents", "home", 9, 152);
    db7.addFilm("table", "home", 8, 100);
    std::vector<std::string> res8 = db7.get_films_less_than(0);
    std::vector<std::string> value8 = {};
    QVERIFY2 ( res8 == value8  ,"task_8_false");
}
void FuncForServer_Test::test_case9()
{
    FilmDB db8;
    db8.addFilm("beef", "home", 9, 148);
    db8.addFilm("friedd eggs", "breakfast", 9, 175);
    db8.addFilm("chair", "home", 8, 81);
    db8.addFilm("documents", "home", 9, 152);
    db8.addFilm("table", "home", 8, 100);
    int res9 = db8.count_genre("home");
    int value9 = 4;
    QVERIFY2 ( res9 == value9  ,"task_9_false");
}
void FuncForServer_Test::test_case10()
{
    FilmDB db9;
    db9.addFilm("beef", "home", 9, 148);
    db9.addFilm("friedd eggs", "breakfast", 9, 175);
    db9.addFilm("chair", "home", 8, 81);
    db9.addFilm("documents", "home", 9, 152);
    db9.addFilm("table", "home", 8, 100);
    int res10 = db9.count_genre("breakfast");
    int value10 = 1;
    QVERIFY2 ( res10 == value10  ,"task_10_false");
}


QTEST_APPLESS_MAIN(FuncForServer_Test)

#include "tst_funcforserver_test.moc"
