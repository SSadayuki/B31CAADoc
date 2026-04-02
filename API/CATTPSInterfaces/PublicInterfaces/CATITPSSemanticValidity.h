#ifndef CATITPSSemanticValidity_H
#define CATITPSSemanticValidity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATTPSStatus.h"

class CATITTRS;

extern "C" const IID IID_CATITPSSemanticValidity;

/**
 * Interface designed to manage the Semantic Validity of Technological Product
 * Specifications (TPS). Norm of the specification is considered as a semantic
 * information. To test an IID use CATCmpGuid of System framework.
 *   @see CATCmpGuid
 */
class CATITPSSemanticValidity : public IUnknown
{
  public:

    /**
     * Retrieves TPS type.
     */
    virtual HRESULT GetType (IID ** oIID) const = 0;

    /**
     * Retrieves TPS super type.
     */
    virtual HRESULT GetSuperType (IID ** oIID) const = 0;

    /**
     * Retrieves semantics interfaces to analyse for understanding a TPS.
     * Returns a list of IID, starting a 0.
     *<br> Sample:
     *<br><pre>CATITPSSemanticValidity * Semantic = NULL;
     *<br> ...
     *<br> // Retrieve interface
     *<br> ...
     *<br> int Count = 0;
     *<br> IID ** IIDList = NULL;
     *<br> Semantic -> GetUnderstandingSemanticsItf (&Count, &IIDList);
     *<br> for (int i = 0; i < Count; i++ )
     *<br> {
     *<br>   // use IIDList[i] for accessing list members
     *<br>   ...
     *<br> }
     *<br> delete [] IIDList; // Remove list
     *</pre>
     */
    virtual HRESULT GetUnderstandingSemanticsItf 
                                    (int * oCount, IID *** oIIDList) const = 0;

    /**
     * Retrieves all semantics interfaces implemented by a TPS.
     * Same usage that <tt>GetUnderstandingSemanticsItf()</tt> method.
     */
    virtual HRESULT GetAllSemanticsItf 
                                    (int * oCount, IID *** oIIDList) const = 0;

    /**
     * Performs semantic check of the TPS.
     *   @param oDiagnostic
     *     Message that contains semantic diagnostic on TPS.
     *     It is composed of [0...n] NLS Keys separated by blank.
     *     <tt>oDiagnostic</tt> must be deleted after use.
     *     Set to NULL if no interest with diagnostic.
     *   @param oStatus
     *     The TPS status.
     *   @param ipiTTRS
     *     To use only with a default annotation. In this case, the TPS could
     *     have many TTRS, so we can want the status of the TPS with on TTRS.
     *     If, you don't give a TTRS, you have the overall status.
     */
    virtual HRESULT Check (wchar_t      ** oDiagnostic,
                           CATTPSStatus *  oStatus,
                           CATITTRS     *  ipiTTRS = NULL) const = 0;

    /**
     * Retrieves the TPS's status.
     * This status depends of TTRS's validity state pointed by TPS.
     *   @param oStatus
     *     The TPS status.
     */
    virtual HRESULT GetTPSStatus (CATTPSStatus* oStatus) const = 0;

};
#endif
