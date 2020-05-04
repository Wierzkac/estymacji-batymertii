#pragma once
#include <cstdint>
#include <vector>
using namespace std;
struct float3 {
	float x, y, z;
};
#pragma pack(1)
struct LidarFileHeader
{
	char magic[4];
	uint16_t fileSourceID;
	uint16_t globalEncoding;
	uint32_t guidData1;
	uint16_t guidData2;
	uint16_t guidData3;
	uint8_t guidData4[8];
	uint8_t versionMaj, versionMin;
	char systemIdentifier[32];
	char genSoftware[32];
	uint16_t creationDay, creationYear;
	uint16_t headerSize;
	uint32_t pointDataOffset;
	uint32_t numVarLenRecords;
	uint8_t pointDataRecordFormat;
	uint16_t pointDataRecordLen;
	uint32_t numberOfPoints;
	uint32_t numPointsByReturn[5];
	double scaleX, scaleY, scaleZ;
	double offX, offY, offZ;
	double minX, minY, minZ;
	double maxX, maxY, maxZ;
};

#pragma pack(1)
struct LidarPointRecord3
{
	
	uint32_t x,y,z;
	uint16_t intensity;
	uint8_t flags;
	uint8_t classification;
	uint8_t scanAngleRank;
	uint8_t userData;
	uint16_t pointSourceId;
	double gpsTime;
	uint16_t red,green,blue;
};

class LidarFile
{
public:
	LidarFileHeader header;
	vector<LidarPointRecord3> verts;

	LidarFile();
	LidarPointRecord3* getVertsData();
	
};

