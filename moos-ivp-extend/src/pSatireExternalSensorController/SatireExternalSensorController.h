/************************************************************/
/*    NAME: Clayton Esposito                                              */
/*    ORGN: MIT                                             */
/*    FILE: SatireExternalSensorController.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef SatireExternalSensorController_HEADER
#define SatireExternalSensorController_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class SatireExternalSensorController : public CMOOSApp
{
 public:
   SatireExternalSensorController();
   ~SatireExternalSensorController();

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
