/************************************************************/
/*    NAME: Clayton Esposito                                              */
/*    ORGN: MIT                                             */
/*    FILE: SatireNavController.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef SatireNavController_HEADER
#define SatireNavController_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class SatireNavController : public CMOOSApp
{
 public:
   SatireNavController();
   ~SatireNavController();

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
