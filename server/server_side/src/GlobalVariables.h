#ifndef GLOBALVARIABLES_H_
#define GLOBALVARIABLES_H_

#include <string>
class Log;
namespace GlobalVariables
{
		static char m_months[13][4]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
		static std::string ALM_SERVICE_LOG_FILE = "/usr/lib/axis2/services/Alm/alm_service.log";
		static std::string ALM_SERVICE_HOME = "/usr/lib/axis2/services/Alm/";
		static std::string ALM_SSD_MOD = "alm_ssd.mod";
		static std::string SMLOOPS_EXEC = "smloops-standalone";
		static Log* logger = NULL;
}
#endif
