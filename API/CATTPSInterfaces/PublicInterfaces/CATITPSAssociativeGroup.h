#ifndef CATITPSAssociativeGroup_H
#define CATITPSAssociativeGroup_H

// COPYRIGHT Dassault Systemes 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSAssociativeGroup ;

class CATITPSList;
class CATITPS;

/**
 * Interface dedicated to manage visual associative group of TPS.
 */
class CATITPSAssociativeGroup: public IUnknown
{
  public:
    /**
     * @nodoc
     * Retrieves the group of the TPS
     *   @param oGroupList
     *     the list of the TPS.
     */
    virtual HRESULT RetrieveGroup ( CATITPSList ** oGroupList) = 0;

    /**
     * Retrieves the group of the TPS in order
     *   @param oGroupList
     *     the list of the TPS.
     *   @param ipiList
     *     if ipiList is NULL, we retrieve and order the group of the TPS.
     */
    virtual HRESULT RetrieveOrderGroup ( CATITPSList ** opiGroupList, 
                                         CATITPSList * ipiList = NULL ) = 0;

    /**
     * @nodoc
     * Update the associative group of the TPS. It means that for each 
     * TPS of the group, we check if it utilizes the same TTRS as its master.
     * If it's not the case, the TPS will lose the associative positions 
     * and orientations referencing the master.
     */
    virtual HRESULT UpdateGroup ( ) = 0;

    /**
     *  Group a 3D annotation under this master 3D annotation.
     *   @param piTPSSlave
     *    The slave 3D annotation that will be grouped under the master 3D annotation
     */
    virtual HRESULT Group ( CATITPS  *piTPSSlave ) const = 0;


};
#endif
