#ifndef CATITPSPrincipalFeature_H
#define CATITPSPrincipalFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2019

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

extern "C" const IID IID_CATITPSPrincipalFeature ;

/**
 * This interface is implemented on FTA annotations.
 * <b>Role</b>: The Principal feature is used to store and retrieve its complementary features.
 */

class CATITPSPrincipalFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets the List of complementary feature(s) to the current Principal feature.
     *  @param iListOfComplementaryFeatures [ in ].
     *    List of complementary feature(s) to set.
     *  @returns S_OK on success.
     *  @returns E_FAIL if one or more of the input complementary features is/are incompatible with the principal feature.
     */
    virtual HRESULT SetComplementaryFeatures(const CATListValCATBaseUnknown_var &iListOfComplementaryFeatures) = 0;
   
    /**
     * Retrieves the List of complementary feature(s) associated with current Principal feature.
     *  @param oListOfComplementaryFeatures [ out ].
     *    List of complementary feature bound to the current feature.
     *  @returns S_OK on success, E_FAIL otherwise.
     */
    virtual HRESULT GetComplementaryFeatures(CATListValCATBaseUnknown_var &oListOfComplementaryFeatures) const = 0;

};

CATDeclareHandler( CATITPSPrincipalFeature, CATBaseUnknown ) ;

#endif
