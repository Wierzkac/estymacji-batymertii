
#include <iostream>
#include <string>
#include "FileReader.h"
#include "MonitoringInfo.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";
    FileReader reader("D:\\STUDIA\\MAGISTERKA\\SEM1\\TMC\\projekt\\estymacji-batymertii\\data\\Monitoring2019info.txt");
    MonitoringInfo* info;
    info=reader.readMonitoringInfo();

}
