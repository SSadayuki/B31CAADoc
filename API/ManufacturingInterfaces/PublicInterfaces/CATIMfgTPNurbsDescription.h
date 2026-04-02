/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
#ifndef CATIMfgTPNurbsDescription_H
#define CATIMfgTPNurbsDescription_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPNurbsDescription;
#else
extern "C" const IID IID_CATIMfgTPNurbsDescription;
#endif

/**
* Interface to manage nurbs data.<br> 
* Description of nurbs is organized by sets (or packets) of nurbs.<br>
* Each set of nurbs has a reference to a start and end polyline of the 'Multiple Motion'
* object linked to the 'Nurbs Description' object, and also to a start and end nurbs.<br>
* Each nurbs has a degree and a reference to start and end pole.<br>
* Each pole have several parameters.<br>
*/

class ExportedByMfgItfEnv CATIMfgTPNurbsDescription : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
/**
*     Retrieves the total number of nurbs 'packets'.
*   @param oNumber
* 	   The number of nurbs 'packet'
*/  
	  virtual CATBoolean GetNumberOfNurbsPacket (int& oNumber) = 0;
/**
*     Retrieves the characteristics of a nurbs 'packet'.
*   @param iNumberOfPacket
* 	   The index of nurbs 'packet'
*   @param oStartPolyline
*      The index of the start polyline
*   @param oEndPolyline
*      The index of the end polyline
*   @param oStartNurbs
*      The index of the start nurbs
*   @param oEndNurbs
*      The index of the end nurbs
*/
	  virtual CATBoolean GetNurbsPacketCharacteristics (int iNumberOfPacket,
		                                                int& oStartPolyline,int& oEndPolyline,
													    int& oStartNurbs,int& oEndNurbs) = 0;
/**
*     Retrieves the characteristics of a nurbs.
*   @param iNumberOfNurbs
* 	   The index of nurbs
*   @param oDegree
*      The degree of the nurbs
*   @param oStartPole
*      The index of the start pole
*   @param oEndPole
*      The index of the end pole
*/
	  virtual CATBoolean GetNurbsCharacteristics (int iNumberOfNurbs,
		                                          int& oDegree,
		                                          int& oStartPole, int& oEndPole) = 0;
/**
*     Retrieves the characteristics of a pole (3-axis machining).
*   @param iNumberOfPole
* 	   The index of the pole
*   @param oXt,oYt,oZt,oW,oDk
*      The parameters of the pole
*/
      virtual CATBoolean GetPoleCharacteristics (int iNumberOfPole,
		                                         double& oXt, double& oYt, double& oZt,
											     double& oW,  double&oDk) = 0;
/**
*     Retrieves the other characteristics of a pole (5-axis machining).
*   @param iNumberOfPole
* 	   The index of the pole
*   @param oXh.oYh,oZh
*      The 5-axis machining parameters of the pole
*/
      virtual CATBoolean GetPoleCharacteristics2 (int iNumberOfNurbs,
												 double& oXh, double& oYh, double& oZh) = 0;
      
/**
*     Retrieves the characteristics of a set of poles.
*   @param iStartPole
* 	   The index of the start pole
*   @param iEndPole
* 	   The index of the end pole
*   @param oXt,oYt,oZt,oXh,oYh,oZh,oW,oDk
*      The lists of parameters
*/
      virtual CATBoolean GetPolesCharacteristics (int iStartPole,int iEndPole,
		                                          CATListOfDouble& oXt, CATListOfDouble& oYt, CATListOfDouble& oZt,
											      CATListOfDouble& oXh, CATListOfDouble& oYh, CATListOfDouble& oZh,
											      CATListOfDouble& oW,  CATListOfDouble& oDk) = 0;

/**
* @nodoc
*/  
      virtual CATBoolean SaveDatas () = 0;

/**
* @nodoc
*/  
	  virtual CATBoolean  AddNurbsPacket (int iStartPolyline, int iEndPolyline) = 0;
	  
/**
* @nodoc
*/  
	  virtual CATBoolean  AddNurbs (int iDegree, const CATListOfDouble& iXt, const CATListOfDouble& iYt, const CATListOfDouble& iZt,
		                                         const CATListOfDouble& iXh, const CATListOfDouble& iYh, const CATListOfDouble& iZh,
										         const CATListOfDouble& iDk, const CATListOfDouble& iW) = 0;
};

CATDeclareHandler(CATIMfgTPNurbsDescription, CATBaseUnknown);

#endif







