/************************************************************/
/*    NAME: Clayton Esposito                                              */
/*    ORGN: MIT                                             */
/*    FILE: SatireInternalSensorController.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef SatireInternalSensorController_HEADER
#define SatireInternalSensorController_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class SatireInternalSensorController : public CMOOSApp
{
 public:
   SatireInternalSensorController();
   ~SatireInternalSensorController();

 protected:
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
   unsigned int m_iterations;
   double       m_timewarp;
};

#endif 
