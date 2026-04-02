#ifndef CATIMfgResourceRepresentation_H
#define CATIMfgResourceRepresentation_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// Forwards 
#include "CATInterfaceEvents.h"
#include "CATIContainer.h"
#include "CATISpecObject.h"

#include "CATListOfInt.h"
#include "CATListOfDouble.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATISpecObject.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgResourceRepresentation ;
#else
extern "C" const IID IID_CATIMfgResourceRepresentation ;
#endif

/**   
 * Interface dedicated to Resource objects representation management.
 * <b>Role</b>: This interface offers services to manage mainly the resource representation.<br>
 */

class ExportedByMfgItfEnv CATIMfgResourceRepresentation : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
/**
 *	Gives the informations on the Resource object Profile (from a sketch point of view).
 *	The informations are relative to the Characteristic Points of the Profile.
 *  One Characteristic Point is an angle or the center of a curve arc.
 *	@param oNbPoints
 *   The number of points for the profile
 *	@param oListXCoord : 
 *   The X coordinate for each point
 *	@param oListYCoord
 *   The Y coordinate for each point
 *	@param oListRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListAngEnd
 *   The End Angle for the curve (if point is curve center)
 */
	  virtual HRESULT GetProfilePts (int                       &oNbPoints,
                                   CATListOfCATUnicodeString &oListParms,
                                   CATListOfDouble           &oListXCoord,
                                   CATListOfDouble           &oListYCoord,
                                   CATListOfDouble           &oListRadius,
                                   CATListOfDouble           &oListAngDeb,
                                   CATListOfDouble           &oListAngEnd,
                                   CATListOfInt              &oListNumPts)=0;

/**
 *	Gives the informations on the Resource object Profile (from a sketch point of view).
 *  The returned profile has no inside holes.
 *	The informations are relative to the Characteristic Points of the Profile.
 *  One Characteristic Point is an angle or the center of a curve arc.
 *	@param oNbPoints
 *   The number of points for the profile
 *	@param oListXCoord : 
 *   The X coordinate for each point
 *	@param oListYCoord
 *   The Y coordinate for each point
 *	@param oListRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListAngEnd
 *   The End Angle for the curve (if point is curve center)
 */
	  virtual HRESULT GetVisibleProfilePts (int                       &oNbPoints,
                                          CATListOfCATUnicodeString &oListParms,
                                          CATListOfDouble           &oListXCoord,
                                          CATListOfDouble           &oListYCoord,
                                          CATListOfDouble           &oListRadius,
                                          CATListOfDouble           &oListAngDeb,
                                          CATListOfDouble           &oListAngEnd,
                                          CATListOfInt              &oListNumPts)=0;

/**
 *	Gives the informations on the Resource object Profile (from a sketch point of view).
 *	The informations are relative to the Characteristic Points of the Profile.
 *  One Characteristic Point is an angle or the center of a curve arc.
 *  You get two profiles as ouput, the first one consists on the cutting part of the resource
 *  the second one is the non cutting part of the resource.
 *  If the resource has a user representation (CATPart or DXF file), the profile will be extracted from it.
 *  If no user representation then the profiles are extracted from the standard profile.
 *	@param oNbCUTPoints
 *   The number of points for the profile of the cutting part
 *	@param oListCUTXCoord : 
 *   The X coordinate for each point
 *	@param oListCUTYCoord
 *   The Y coordinate for each point
 *	@param oListCUTRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListCUTAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListCUTAngFin
 *   The End Angle for the curve (if point is curve center)
 *	@param oListCUTNumPts
 *   ...
 *	@param oNOCUTNbPoints
 *   The number of points for the profile of the non cutting part
 *	@param oListNOCUTXCoord : 
 *   The X coordinate for each point
 *	@param oListNOCUTYCoord
 *   The Y coordinate for each point
 *	@param oListNOCUTRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListNOCUTAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListNOCUTAngFin
 *   The End Angle for the curve (if point is curve center)
 *	@param oListNOCUTNumPts
 *   ...
 */
  virtual HRESULT GetCUTAndNOCUTProfilePts (int             &oNbCUTPoints,
                                            CATListOfDouble &oListCUTXCoord,
                                            CATListOfDouble &oListCUTYCoord,
                                            CATListOfDouble &oListCUTRadius,
                                            CATListOfDouble &oListCUTAngDeb,
                                            CATListOfDouble &oListCUTAngFin,
                                            CATListOfInt    &oListCUTNumPts,
                                            int             &oNbNOCUTPoints,
                                            CATListOfDouble &oListNOCUTXCoord,
                                            CATListOfDouble &oListNOCUTYCoord,
                                            CATListOfDouble &oListNOCUTRadius,
                                            CATListOfDouble &oListNOCUTAngDeb,
                                            CATListOfDouble &oListNOCUTAngFin,
                                            CATListOfInt    &oListNOCUTNumPts)=0;

/**
 *	Gives the informations on the Resource object Profile (from a sketch point of view).
 *  The returned profiles arecomputed from the GetVisibleProfilePts
 *	The informations are relative to the Characteristic Points of the Profile.
 *  One Characteristic Point is an angle or the center of a curve arc.
 *  You get two profiles as ouput, the first one consists on the cutting part of the resource
 *  the second one is the non cutting part of the resource.
 *  If the resource has a user representation (CATPart or DXF file), the profile will be extracted from it.
 *  If no user representation then the profiles are extracted from the standard profile.
 *	@param oNbCUTPoints
 *   The number of points for the profile of the cutting part
 *	@param oListCUTXCoord : 
 *   The X coordinate for each point
 *	@param oListCUTYCoord
 *   The Y coordinate for each point
 *	@param oListCUTRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListCUTAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListCUTAngFin
 *   The End Angle for the curve (if point is curve center)
 *	@param oListCUTNumPts
 *   ...
 *	@param oNOCUTNbPoints
 *   The number of points for the profile of the non cutting part
 *	@param oListNOCUTXCoord : 
 *   The X coordinate for each point
 *	@param oListNOCUTYCoord
 *   The Y coordinate for each point
 *	@param oListNOCUTRadius
 *   The Radius value for each point (non zero for point as curve center)
 *	@param oListNOCUTAngDeb
 *   The Start Angle for the curve (if point is curve center)
 *	@param oListNOCUTAngFin
 *   The End Angle for the curve (if point is curve center)
 *	@param oListNOCUTNumPts
 *   ...
 */
  virtual HRESULT GetCUTAndNOCUTFromVisibleProfilePts (int             &oNbCUTPoints,
                                                       CATListOfDouble &oListCUTXCoord,
                                                       CATListOfDouble &oListCUTYCoord,
                                                       CATListOfDouble &oListCUTRadius,
                                                       CATListOfDouble &oListCUTAngDeb,
                                                       CATListOfDouble &oListCUTAngFin,
                                                       CATListOfInt    &oListCUTNumPts,
                                                       int             &oNbNOCUTPoints,
                                                       CATListOfDouble &oListNOCUTXCoord,
                                                       CATListOfDouble &oListNOCUTYCoord,
                                                       CATListOfDouble &oListNOCUTRadius,
                                                       CATListOfDouble &oListNOCUTAngDeb,
                                                       CATListOfDouble &oListNOCUTAngFin,
                                                       CATListOfInt    &oListNOCUTNumPts)=0;
};
CATDeclareHandler(CATIMfgResourceRepresentation, CATBaseUnknown) ;
#endif
