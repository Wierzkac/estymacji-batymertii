#include "LidarFile.h"

LidarFile::LidarFile()
{

}

LidarPointRecord3* LidarFile::getVertsData()
{
	return verts.data();
}


