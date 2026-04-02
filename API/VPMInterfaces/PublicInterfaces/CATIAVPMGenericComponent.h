// -*-C++-*-
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
// SRU(jan02) Creation
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIAVPMGenericComponent_h
#define CATIAVPMGenericComponent_h
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMProductRootClass_var;
class CATIAVPMGenericComponent_var;
class CATUnicodeString;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMGenericComponent;
#else
extern "C" const IID IID_CATIAVPMGenericComponent;
#endif

//------------------------------------------------------------------
/**
 * Interface that defines and manages the Generic Component (Import...).
 */
class ExportedByGUIDVPMInterfaces CATIAVPMGenericComponent : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

//-----------------------------------------------------------------
//----- GCo import management
//---

    /**
     * @nodoc
     * Import the Generic component in a PRC
     * @param ihDestinationPRC
     *   Product destination.
     * @param ohImportedGCo
     *   Created Generic Component.
     * @param iIsPrimary
     *   Primary import.
     *   <br><b>Legal Values</b>: The default value for iIsPrimary is set to 0 (i.e. FALSE).
     */
   virtual HRESULT ImportIn( const CATIAVPMProductRootClass_var & ihDestinationPRC,
			    CATIAVPMGenericComponent_var & ohImportedGCo,
			    const short iIsPrimary=0 /*FALSE*/ )=0;

    /**
     * @nodoc
     * check if the Generic component is importable in a PRC
     * @param ihDestinationPRC
     *   Product destination.
     * @param oMessage
     *   Error message.
     * @param iIsPrimary
     *   Primary import.
     *   <br><b>Legal Values</b>: The default value for iIsPrimary is set to 0 (i.e. FALSE).
     */
    virtual HRESULT IsImportableIn( const CATIAVPMProductRootClass_var & ihDestinationPRC,
				    CATUnicodeString & oMessage,
				    const short iIsPrimary=0 /*FALSE*/)=0;

    /**
     * Check if the Generic component has been imported in a PRC
     * @return S_OK
     *       The generic component has been imported in a PRC.
     * @return S_FALSE
     *       The generic component has not been imported in a PRC.
     */
    virtual HRESULT IsImported()=0;

    /**
     * @nodoc
     * Retrieve the eventual template generic component origin of this. 
     * @param ohOriginGCo
     *   origin template GCo.
     * @return S_OK
     *       The generic component is an imported GCo.
     * @return S_FALSE
     *       The generic component is not an imported GCo.
     */
    virtual HRESULT get_OriginGenericComponent(CATIAVPMGenericComponent_var & ohOriginGCo)=0;

//---
//-----------------------------------------------------------------

    /**
     * @nodoc
     * Check if the Generic component is primary
     * @return S_OK
     *       The generic component is primary.
     * @return S_FALSE
     *       The generic component is not primary.
     */
    virtual HRESULT IsPrimary()=0;

		
		/**
		* @nodoc
		* Insert a new father Generic Component 'above'
		* this.
		* @param ohProductComponent new parent GCO.
		* @param iID, new parent GCO's ID.
		* @param iName, new parent underlying PCO name.
		* @param iDescription , new parent underlying PCO description
		*/
		virtual HRESULT InsertNewGenericComponent(
			const CATUnicodeString &  iID,
			const CATUnicodeString &  iName,
			const CATUnicodeString &  iDescription,
			CATIAVPMGenericComponent_var& ohProductComponent)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMGenericComponent, CATBaseUnknown);

#endif

