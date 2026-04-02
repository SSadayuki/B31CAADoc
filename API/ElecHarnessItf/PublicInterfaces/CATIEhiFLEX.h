#ifndef CATIEhiFLEX_H
#define CATIEhiFLEX_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */



#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"

/**
* Profile Type.
* @param Circular
*   Circular profile.
* @param Elliptical
*   Elliptical profile.
* @param Rectangular
*   Rectangular profile.
* @param Noprofile
*   No profile profile specified.
*/
enum CATEhiProfileType
{
    Circular=1, 
    Elliptical,
    Rectangular,
    Noprofile
};

class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiFLEX;
#else
extern "C" const IID IID_CATIEhiFLEX ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage physical properties of a segment.
 * We call "segment" a portion of a bundle segment where the physical properties
 * are constant.
 * <b>Role<b/>:Returns the value of the Equivalent Young Modulus (in N/m2) and 
 *             Equivalent RatioToBend and Equivalent RatioToTwist function of
 *             the values of the wires/wiregroups and  protections contained 
 *             in it. Also function of the profile type and dimensionsof the
 *             segment, and the flexibility of the bundle segment.
 */
class ExportedByCATEhiInterfaces CATIEhiFLEX: public CATBaseUnknown
{ 
  CATDeclareInterface;

  public:

    /**
     * Returns the value of the Equivalent Young Modulus (in N/m2) and 
     * Equivalent RatioToBend and Equivalent RatioToTwist function of
     * the wires/wiregroups and  protections contained in it. Also 
	 * function of the profile type and dimensions of the
	 * segment, and the flexibility of the bundle segment.
	 *
     * @param iListOfWireWireGroup
     *   The list of the Wire(s) and/or WireGroup(s) in the segment.
     *  
	 * @param iOrderedListOfProtectionReference
     *   The list of the Protections(s) covering successively the segment.
	 *
	 * @param ipInternalSpliceReferenceList
     *   The list of the Internal Splice(s) inside the the segment.
	 *
	 * @param iProfile
     *   The type of the profile. It can be either Circular, Elliptical, Rectangular or Noprofile
	 *
	 * @param iProfileLength1
     *   The major dimension of the profile (in mm).
	 *
     * @param iProfileLength2
     *   The minor dimension of the profile (in mm).
	 *
     * @param iBundleSegmentFlexibility
     *   The list of the Protections(s) covering successively the segment.
	 *
     * @param oYoungModulusEquivalent
     *   The value of the equivalent Young Modulus (in N/m2) of the segment.
	 *
     * @param oEquivalentRatioToBend
     *   The value of the equivalent Ratio-To-Bend of the segment.
	 *
     * @param oEquivalentRatioToTwist
     *   The value of the equivalent Ratio-To-Twist of the segment.
     */
     virtual HRESULT GetFLEXEquivalentModulus( 
		 CATListValCATBaseUnknown_var * ipListOfWireWireGroup,
		 CATListValCATBaseUnknown_var * ipOrderedListOfProtectionReference,
		 CATListValCATBaseUnknown_var * ipInternalSpliceReferenceList,
		 CATEhiProfileType iProfile,
		 double iProfileLength1,
		 double iProfileLength2,
		 int iBundleSegmentFlexibility,
		 double & oYoungModulusEquivalent,
		 double & oEquivalentRatioToBend,
		 double & oEquivalentRatioToTwist)=0;
  
};


#endif
