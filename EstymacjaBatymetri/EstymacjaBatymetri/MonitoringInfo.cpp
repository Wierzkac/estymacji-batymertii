#include "MonitoringInfo.h"


MonitoringInfo::MonitoringInfo()
{
	this-> coverage=new Coverage();
	 this->sweepDates=new TimeRange();
	 this->flatCoordinateSystem="";
	 this->altitudeSystem="";
	 this->orthophotomap= new OrthophotomapSpecyfication();
	 this->lidar= new LIDARSpecyfication();
	 this->grid= new GRIDSpecyfication();
}
