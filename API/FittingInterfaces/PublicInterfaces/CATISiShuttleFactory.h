
// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISampledFactory.h
// Define the CATISampledFactory interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================


/* -*-c++-*- */
#ifndef CATISiShuttleFactory_H
#define CATISiShuttleFactory_H


/**
 * @CAA2Level L1  
 * @CAA2Usage U1
 */


#include "G60I0FIT.h"

#include "CATBaseUnknown.h"
#include "CATISiShuttle.h"
#include "CATISpecObject.h"
#include "CATISiList.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISiShuttleFactory;
#else
extern "C" const IID IID_CATISiShuttleFactory;
#endif

class CATUnicodeString;


    /**
     * Interface to implement factory usede in order to build shuttle objects.
     */


class ExportedByG60I0FIT CATISiShuttleFactory : public CATBaseUnknown
{
  CATDeclareInterface;

  public :

      /**
       * Creates and returns a new CATISiShuttle object.
       * @param iName
       *    The name of the shuttle
       * @param iList
       *    A list of objects used by the shuttle.
       * @return
       *    A newly created shuttle.
       */
  
  virtual CATISiShuttle_var CreateShuttle (CATUnicodeString iName, CATISiList_var iList=NULL_var) const=0;

}; 

CATDeclareHandler(CATISiShuttleFactory,CATBaseUnknown);

#endif // CATISiShuttleFactory_H

