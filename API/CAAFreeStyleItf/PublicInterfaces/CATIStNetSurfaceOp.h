#ifndef CATIStNetSurfaceOp_H
#define CATIStNetSurfaceOp_H

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//==============================================================================
//
// CATIStNetSurfaceOp :
//   Class defining the operator that builds a Net Surface.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStNetSurfaceOp (CAAFreeStyleItf FW)
//                  CATBaseUnknown   (System FW)
//==============================================================================
// May. 08   Creation                                             Thomas ECKERT
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "ListVOfLong.h"
#include "ListPOfCATBody.h"

#include "CATDataType.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAAFreeStyleItf IID IID_CATIStNetSurfaceOp;
#else
extern "C" const IID IID_CATIStNetSurfaceOp;
#endif

/**
 * Class defining the operator that builds a Net Surface.
 * <ul>
 * <li> Create the operator with the global function <tt>CATCreateTopStNetSurfaceOp</tt>
 * <li> Set/Get the geometrical inputs and the options with the suitable functions.
 * <li> Run with the <tt>Run</tt> method
 * <li> The result is accessed with the <tt>GetResult</tt> method.
 * <li> Release this interface when it is not needed anymore.
 */
class ExportedByCAAFreeStyleItf CATIStNetSurfaceOp : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
    * Sets/Gets the profiles.
    * @param iProfiles/oProfiles
    * The list of pointers to the profiles.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetProfiles(const ListPOfCATBody & iProfiles)       = 0;
    virtual HRESULT GetProfiles(      ListPOfCATBody & oProfiles) const = 0;

    /**
    * Sets/Gets the guides.
    * @param iGuides/oGuides
    * The list of pointers to the guides.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetGuides(const ListPOfCATBody & iGuides)       = 0;
    virtual HRESULT GetGuides(      ListPOfCATBody & oGuides) const = 0;

    /**
    * Sets/Gets the dominant profile.
    * @param iRankDomProfile/oRankDomProfile
    * The rank (beginning at 1) of the profile corresponding to the dominant one.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetDominantProfile(const CATLONG32   iRankDomProfile)       = 0;
    virtual HRESULT GetDominantProfile(      CATLONG32 & oRankDomProfile) const = 0;

    /**
    * Sets/Gets the dominant guide.
    * @param iRankDomGuide/oRankDomGuide
    * The rank (beginning at 1) of the guide corresponding to the dominant one.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetDominantGuide(const CATLONG32   iRankDomGuide)       = 0;
    virtual HRESULT GetDominantGuide(      CATLONG32 & oRankDomGuide) const = 0;

    /**
    * Sets/Gets the mode of copy of the same characteristics as the dominant curves on the result surface.
    * @param iMode/oMode
    * The status of the mode.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetDominantCharacteristicCopyMode(const CATBoolean   iMode)       = 0;
    virtual HRESULT GetDominantCharacteristicCopyMode(      CATBoolean & oMode) const = 0;

    /**
    * Sets/Gets the type of continuity to be applied on each profile.
    * @param iContinuities/oContinuities
    * The list of CATLONG32 corresponding to a type of continuity on each profile.
    * <br>Legal values</b>:
    * <tt>0</tt> for G0, <tt>1</tt> for G1, <tt>2</tt> for G2.
    * @return
    * HRESULT.
    */
    virtual HRESULT SetExternalContinuitesOnProfiles(const CATListOfLong & iContinuities)       = 0;
    virtual HRESULT GetExternalContinuitesOnProfiles(      CATListOfLong & oContinuities) const = 0;
	
    /**
    * Sets/Gets the type of continuity to be applied on each guide.
    * @param iContinuities/oContinuities
    * The list of CATLONG32 corresponding to a type of continuity on each guide.
    * <br>Legal values</b>:
    * <tt>0</tt> for G0, <tt>1</tt> for G1, <tt>2</tt> for G2.
    * @return
    * HRESULT.
    */
	virtual HRESULT SetExternalContinuitesOnGuides(const CATListOfLong & iContinuities)       = 0;
	virtual HRESULT GetExternalContinuitesOnGuides(      CATListOfLong & oContinuities) const = 0;

    /**
    * Runs the operator.
    * @return
    * HRESULT.
    */
    virtual HRESULT Run() = 0;

    /**
    * Gets the body resulting from the operation.
    * @param opBody
    * The resulting body.
    * @return
    * HRESULT.
    */
    virtual HRESULT GetResult(CATBody *& opBody) = 0;
};

CATDeclareHandler(CATIStNetSurfaceOp, CATBaseUnknown);

#endif
