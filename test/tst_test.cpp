#include <QtTest>

// add necessary includes here
#include <../Client/tree.cpp>
#include <../Client/node.cpp>
class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_Osin_preffer_decoder1();
    void test_Osin_preffer_decoder2();
    void test_Osin_preffer_decoder3();
    void test_Nurov_preffer_coder();
};

test::test()
{

}

test::~test()
{

}

void test::test_Osin_preffer_decoder1()
{
    std::vector<int> input = {5, 5, 9, 9, 5, 4, 1};
    std::vector<std::vector<int>> output = {{4, 9}, {5}, {5}, {5, 1}, {2, 3, 8, 4}, {9}, {9}, {5}, {6, 7, 1}};
    QVERIFY(get_smeg_by_cod_prufer(input) == output);
}

void test::test_Osin_preffer_decoder2()
{
    std::vector<int> input = {3, 4, 2, 2, 1, 6, 7};
    std::vector<std::vector<int>> output = {{2, 6}, {4, 8, 1}, {5, 4}, {3, 2}, {3}, {1, 7}, {6, 9}, {2}, {7}};
    QVERIFY(get_smeg_by_cod_prufer(input) == output);
}

void test::test_Osin_preffer_decoder3()
{
    std::vector<int> input = {1, 1, 1, 1, 4, 9, 8};
    std::vector<std::vector<int>> output = {{2, 3, 5, 6, 4}, {1}, {1}, {1, 9}, {1}, {1}, {8}, {7, 9}, {4, 8}};
    qDebug() << get_smeg_by_cod_prufer(input);

}

void test::test_Nurov_preffer_coder()
{

}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
