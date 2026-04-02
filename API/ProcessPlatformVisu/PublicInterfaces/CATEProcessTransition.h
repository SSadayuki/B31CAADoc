/**
* @CAA2Level L0
* @CAA2Usage U0
*/
// COPYRIGHT DASSAULT SYSTEMES 2006
//===================================================================
//
// CATEProcessTransition.h
// Provide implementation to interface
//    CATIWorkbenchTransition
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  May 1999                                              pcm
//===================================================================
#ifndef CATEProcessTransition_H
#define CATEProcessTransition_H

#include "CATIAV5Level.h"

#include "WSPROCESS.h"
#include "CATExtIWorkbenchTransition.h"
#include "CATListOfCATString.h"

class CATFrmWindow ;
//-----------------------------------------------------------------------

class ExportedByWSPROCESS CATEProcessTransition: public CATExtIWorkbenchTransition
{
  CATDeclareClass;

  public:
/**
 * @nodoc
 */
enum PPRWindowMode { PPR2D =0, PPR3D} ;
 

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
/**
 * @nodoc
 */
     CATEProcessTransition ();
	 /**
 * @nodoc
 */
     virtual ~CATEProcessTransition ();
/**
 * @nodoc
 */
     virtual int DoTransition(const CATString & FromWorkshop,
			   const CATString & FromWorkbench,
			   const CATString & ToWorkshop,
			   const CATString & ToWorkbench);
 /**
 * @nodoc
 */
     virtual void Init();

 /**
 * @nodoc
 */
     virtual void Dispose ();


  protected:
     CATListOfCATString* _ListAppLibs;
     PPRWindowMode _WindowMode;
  
  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEProcessTransition (CATEProcessTransition &);
  CATEProcessTransition& operator=(CATEProcessTransition&);
  
  CATFrmWindow* GetPPRWindow (PPRWindowMode iWndType) ;

};

//-----------------------------------------------------------------------

#endif
