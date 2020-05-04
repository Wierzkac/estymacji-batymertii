
#include <iostream>
#include <string>
#include "FileReader.h"
#include "MonitoringInfo.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";
    /*FileReader reader("D:\\STUDIA\\MAGISTERKA\\SEM1\\TMC\\projekt\\estymacji-batymertii\\data\\Monitoring2019info.txt");
    MonitoringInfo* info;
    info=reader.readMonitoringInfo();*/

    FileReader reader("D:\\STUDIA\\MAGISTERKA\\SEM1\\TMC\\projekt\\Monitoring2019-Profile\\B_DANE_POMIAROWE_1\\KM_3_0.las");
    LidarFile* lidarFile;
    lidarFile=reader.readLidarFile();
}
